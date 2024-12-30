void	ft_swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// int	main(void)
// {
// 	int x = 5;
// 	int y = 9;

// 	printf("numbers before swap %d and %d \n", x, y);
// 	ft_swap(&x, &y);
// 	printf("numbers after swap %d and %d", x, y);
// 	return (0);
// }
