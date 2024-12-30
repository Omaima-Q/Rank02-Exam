int ft_strlen(char *str)
{
	int	i = 0;

	while (str[i])
		i++;
	return (i);
}

// int	main(void)
// {
// 	char *str = "omaima";
// 	printf("%d", ft_strlen(str));
// 	return (0);
// }
