#include <stdlib.h>

char *ft_itoa(int nbr)
{
	if ( nbr == -2147483648)
		return ("-2147483648\0");

	int n = nbr; // reason for copying nbr into n is to preserve the value of nbr 
// for later use
	int len = 0;
	if (nbr <= 0)
		len++; // the increment here is for the negative sign or for the zero itself
	while(n)
	{
		n /= 10; // This loop counts how many digits are in nbr by repeatedly dividing n by 10 until n becomes 0
		len++;
	}
	char *result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
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
		// Inside the loop, nbr % 10 is used to get the last digit of the number.
		//The modulus operator % returns the remainder of the division of nbr by 10, 
		//which effectively gives the last digit. For example, if nbr is 123, nbr % 10 will yield 3.
		result[--len] = nbr % 10 + '0';
		// The --len operation decrements the length counter 
		//before using it, which means that the last digit will be placed at the end of the 
		//string (just before the null terminator).
		//This is essential because the digits are filled in reverse order.
		nbr /= 10;
	}
	return (result)

}


// int main() 
// {
//     // Test the ft_itoa function with a single integer
//     int number = -1234;
//     char *result = ft_itoa(number);
    
//     if (result != NULL) 
//     {
//         printf("ft_itoa(%d) = %s\n", number, result);
//         free(result); // Free the allocated memory
//     } 
//     else 
//         printf("Memory allocation failed.\n");
//
//     return 0;
// }

	
