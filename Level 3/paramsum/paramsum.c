#include <unistd.h>

void	ft_putnbr(int n) // use the putnbr function to print the numbers
{
	char digit;

	if (n >= 10)
		ft_putnbr(n / 10);
	digit = (n % 10) + '0'; // // '0' is added to convert the integer to its ASCII character
	write(1, &digit, 1);
}

//or we can use this putnbr function

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

int	main(int argc, char **argv)
{
	(void)argv; // Ignore the argv parameter as it's not used

	ft_putnbr(argc - 1); // the reason for using (argc - 1)
	//is to count the number of command-line arguments passed 
	// to the program, excluding the program's name itself.
	write(1, "\n", 1);
	return (0);
}
