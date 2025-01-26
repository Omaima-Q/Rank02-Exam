int max(int *tab, unsigned int len)
{
	int result;
	unsigned int i = 0;
	
	if (len == 0)
		return (0);
	result = tab[i];
	while(i < len)
	{
		if (result <  tab[i])
			result = tab[i];
		i++;
	}
	return result;
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	int tab[] = {24, 67, 89, 78};                   
// 		// Initialize an array of integers
// 	unsigned int len = sizeof(tab) / sizeof(tab[0]);
// 		// Calculate the length of the array
// 	int result = max(tab, len);                     
// 		// Call max with the array and its length
// 	printf("%d\n", result);                          // Print the result
// 	return (0);
// }

