#include <stdlib.h>

char *ft_itoa(int nbr)
{
	if ( nbr == -2147483648)
		return ("-2147483648\0");

	int n = nbr; // reason for copying nbr into n is to preserve the value of nbr 
// for later use
	int len = 0;
	if (nbr <= 0)
		len++;
	while(n)
	{
		n /= 10;
		len++;
	}
	char *result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		resturn (NULL);
	result[len] = '\0';
	while (nbr == 0)
	{
		result[0] = '0';
		return (result);
	}
	while (nbr < 0)
	{
		result[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		result[--len] = nbr / 10 + '0';
		nbr /= 10;
	}
	return (result)
}

	
