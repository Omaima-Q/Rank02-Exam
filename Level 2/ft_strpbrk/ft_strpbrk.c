#include <stdio.h>
#include <string.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
	int j = 0;
	
	if (!s1 || !s2) // if both string null just return 0
		return (0);
	while(s1[i])
	{
		j = 0;
	   	while(s2[j])
		{
			if(s2[j] == s1[i]) // if s1 is found in s2 return s1 and if not keep iterating
				return (s1[i]);
			j++;
		}
		i++;	
	}
	return (NULL);
}
