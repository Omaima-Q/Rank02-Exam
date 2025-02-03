
unsigned char swap_bits(unsigned char octet) 
{
    if (octet == 0) {
        return (0); // Explicitly return 0 for clarity, although it's redundant
    }
    return ((octet >> 4) | (octet << 4));
}

// int main() 
// {
//     unsigned char original = 173; // Example byte in decimal (10101101 in binary)
//     unsigned char swapped = swap_bits(original);

//     printf("Original byte (decimal): %d\n", original);
//     printf("Original byte (binary): 0b10101101\n");
//     printf("Swapped byte (decimal): %d\n", swapped);
//     printf("Swapped byte (binary): 0b11011010\n");

//     return 0;
// }
