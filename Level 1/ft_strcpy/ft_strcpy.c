// passed in the exam

char	*ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

// int	main(void)
// {
// 	char str1[] = "omaima";
// 	char str2[] = "good";
// 	ft_strcpy(str1, str2);
// 	printf("%s \n%s", str1, str2);
// 	return (0);
// }
