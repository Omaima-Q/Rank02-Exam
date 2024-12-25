#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	number;

	if (argc == 2)
	{
		i = 1;
		number = atoi(argv[1]);
		if (number == 1)
			printf("1");
		while (number >= ++i)
		{
			if (number % i == 0)
			{
				printf("%d", i);
				if (number == i)
					break ;
				printf("*");
				number /= i;
				i = 1;
			}
		}
	}
	printf("\n");
	return (0);
}
/*

Initial Values:

i = 2
num = 42

Check Divisibility:

42 % 2 = 0
2 will be printed
num = 42 / 2 = 21
i++:

i = 2
21 % 2 != 0
i++
i = 3

Check Divisibility:

21 % 3 = 0
3 will be printed
num = 21 / 3 = 7
i++:
i = 2
7 % 2 != 0
i++
i = 3
7 % 3 != 0
i++
i = 4
7 % 4 != 0
i++
i = 5
7 % 5 != 0
i++
i = 6
7 % 6 != 0
i++
i = 7
7 % 7 = 0
7 will be printed
num = 7 / 7 = 1
Loop terminates since num == i
*/
