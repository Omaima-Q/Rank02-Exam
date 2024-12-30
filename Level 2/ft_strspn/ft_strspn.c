#include <stddef.h>

size_t	ft_strspn(const char *s, const char *accept)
{
    size_t count;
    size_t i;

    count = 0;
    i = 0;
    while (*s)
    {
        while (accept[i] && *s != accept[i])
            i++;
        if (accept[i] == '\0')
            return (count);
        i = 0;
        count++;
        s++;
    }
    return (count);
}

// or you can use another way, check the function below 

#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
    int i = 0;
    int j = 0;
    int flag;

    while(s[i++])
    {
        j = 0;
        flag = 0;
        while(accept[j])
        {
            if (s[i] == accept[j])
                flag = 1;
            j++;
        }
        if (flag == 0)
            return (i);
    }
    return (i);
}

// int main()
// {
//     char s1[] = "omaima";
//     char accept[] = "omai";

//     printf("%zu", ft_strspn(s1, accept));
// }
// the result is 6

