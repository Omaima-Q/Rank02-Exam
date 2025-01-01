#include <unistd.h>

int	main(int ac, char **av)
{
	int i = 0;
	int start;
	int end;

	if (ac == 2)
	{
		while (av[1][i] != '\0')// iterate until the end of the string
			i++;
		while (i >= 0) // keep iterating until the begonning of the string 
		{
			while (av[1][i] == '\0' || av[1][i] == ' ' || av[1][i] == '\t')
				i--; // iterate backwards until it finds null or space or tab
			end = i; // i now at the end of the word
			while (av[1][i] != '\0' && av[1][i] != ' ' && av[1][i] != '\t')
				i--;
			start = i + 1;
			int flag;
			flag = start;
			while (start <= end)
			{
				write(1, &av[1][start], 1);
				start++;
			}
			if (flag != 0)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
