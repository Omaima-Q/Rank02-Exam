#include <stdio.h>
#include <stdlib.h>

int ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int result = 0;
    int sign = 1;

    while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
        i++;

    if (str[i] == '-')
        sign = -sign;

    if (str[i] == '+' || str[i] == '-')
        i++;

    while (str[i])
    {
        int digit_value = -1;

        if (str[i] >= '0' && str[i] <= '9')
            digit_value = str[i] - '0';
        else if (str_base <= 16 && str[i] >= 'a' && str[i] <= 'f')
            digit_value = 10 + str[i] - 'a';
        else if (str_base <= 16 && str[i] >= 'A' && str[i] <= 'F')
            digit_value = 10 + str[i] - 'A';

        if (digit_value < 0 || digit_value >= str_base)
            break;

        result = result * str_base + digit_value;
        i++;
    }

    return (result * sign);
}

/*int main (int ac, char **av)
{
	(void)ac;
	printf("%d\n", ft_atoi_base(av[1], atoi(av[2])));
}*/
