#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;

	if (ac == 2)
	{
		while(av[1][i])
			i++; // iteration util the end of the string
		i--; //iterate backwards after the null terminator (last character of the last word) 
		while(av[1][i] > 32)
			i--; // iterate backwards until we find a space 
		i++; // iterate forward the last string (which is the last word)
		while(av[1][i])
		{
			write(1, &av[1][i], 1); // print the last word
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
