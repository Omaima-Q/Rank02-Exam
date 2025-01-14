#include <stdlib.h>

int *ft_range(int start, int end)
{
	int i = 0;
	int len = abs((end - start)) + 1;
	int *res = (int *)malloc(sizeof(int) * len);
	
	while (i < len)
	{
		if (start < end)
		{
			res[i] = start;
			start++;
			i++;
		}
		else
		{
			res[i] = start;
			start--;
			i++;
		}
	}
        return (res);
}

or 

#include <unistd.h>
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
            result[i] = start;
            start++;
        }
        else
        {
            result[i] = start;
            start--;
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
