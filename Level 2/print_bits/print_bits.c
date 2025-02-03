// passed in rank 02 exam

#include <unistd.h>

void print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char 	bit;

	if (bit == 0 || octet == 0)
		return;

	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}
