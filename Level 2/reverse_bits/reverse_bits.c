unsigned char	reverse_bits(unsigned char octet)
{
	int		i = 8;
	unsigned char	res = 0;

	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
}

// int main() 
// {
//     unsigned char original = 0b01101001; // Example binary number: 105 in decimal
//     unsigned char reversed = reverse_bits(original);

//     printf("Original byte (binary): 0b01101001\n");
//     printf("Original byte (decimal): %u\n", original);
//     printf("Reversed byte (binary): 0b10010110\n");
//     printf("Reversed byte (decimal): %u\n", reversed);

//     return 0;
// }
