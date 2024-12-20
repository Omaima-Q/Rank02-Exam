#include <unistd.h>

void print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char 	bit;

	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

int main(void) 
{
    unsigned char value;

    // Example: Let's use the value 5 (which is 00000101 in binary)
    value = 50;

    // Call the print_bits function to print the binary representation
    print_bits(value);

    // Print a newline for better output formatting
    write(1, "\n", 1);

    return 0;
}

// output is : 00110010 for the value 50

