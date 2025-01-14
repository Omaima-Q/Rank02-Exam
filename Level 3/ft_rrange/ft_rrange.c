#include <stdio.h>
#include <stdlib.h>

int *ft_range(int start, int end)
{
    int i = 0;
    int *result;
    int len;
    if (end > start)
        len = end - start + 1;
    else
        len = start - end + 1;
    result = malloc(len * sizeof(int));
    if (!result)
        return(NULL);
    while (len > i)
    {
        if (end > start)
        {
            result[i] = end;
            end--;
        }
        else
        {
            result[i] = end;
            end++;
        }
        i++;
    }
    return(result);
}

// int main(void)
// {
//     int size = 4;
//     int *result = ft_range(0, -3);
//     int i = 0;
//     while (size > i)
//     {
//         printf("%d\n", result[i]);
//         i++;
//     }
// }
