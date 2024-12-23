#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	i = 0;
	int	length = 0;
	char	*strcpy;

	while (src[length])
		length++;
	strcpy = malloc(sizeof(*strcpy) * (length + 1));
	if (strcpy != NULL)
	{
		while (src[i])
		{
			strcpy[i] = src[i];
			i++;
		}
		strcpy[i] = '\0';
	}
	return (strcpy);
}

int main() 
{
    char original[] = "Hello, World!";
    char *duplicate;

    // Call ft_strdup to duplicate the string
    duplicate = ft_strdup(original);

    // Check if duplication was successful
    if (duplicate != NULL) {
        // Print the original and duplicated strings
        printf("Original: %s\n", original);
        printf("Duplicate: %s\n", duplicate);
        
        // Free the allocated memory for the duplicate
        free(duplicate);
    } else {
        // Handle memory allocation failure
        printf("Memory allocation failed!\n");
    }

    return 0;
}
