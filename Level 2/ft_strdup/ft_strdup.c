#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i]) // calculate the length first (same as strlen)
		i++;
	dest = malloc(sizeof(char) * (i + 1)); // malloc the dest 
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i]; // this line is same as strcpy function
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// this function is totally same as strcpy function, the only difference is that you must malloc the 
// destination (which is dest) and copy the string inside it

// int	main(void)
// {
// 	printf("%s\n", ft_strdup("test"));
// }
