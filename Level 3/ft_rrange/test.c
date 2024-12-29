#include <stdlib.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
{
	int i = 0;
	int len = (abs(end - start)) + 1;
	int *res = malloc(sizeof(int) * len);

	while (i < len)
	{
		if (start > end)
		{
			res[i] = start;
			start--;
			i++;
		}
		else
		{
			res[i] = start;
			start++;
			i++;
		}
	}
	return (res);
}

int main()
{
    int start = -1;
    int end = 2;
    int len = (abs(end - start)) + 1;

    int *result = malloc(sizeof(int) * len);

    result = ft_rrange(-1, 2);
    printf("%d\n", result[0]);
    printf("%d\n", result[1]);
    printf("%d\n", result[2]);
    printf("%d\n", result[3]);
    printf("%d\n", result[4]);
    free (result);
}
