#include <stdlib.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
{
	int i = 0;
	int len = (abs(start - end)) + 1;
	int *res = malloc(sizeof(int) * len);

	while (i < len)
	{
		if (start > end)
		{
			res[i] = end;
			end++;
			i++;
		}
		else
		{
			res[i] = end;
			end--;
			i++;
		}
	}
	return (res);
}

int main() 
{
    int start = 0;
    int end = 0;
    int *result = ft_rrange(start, end);
    
    if (result) {
        for (int i = 0; i <= (end - start); i++) {
            printf("%d ", result[i]);
        }
        free(result); // Don't forget to free the allocated memory
    }
    
    return 0;
}
