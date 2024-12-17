#include <stdio.h>

int is_power_of_2(unsigned int n) 
{
    return (n && !(n & (n - 1)));
}

// int main() 
// {
//     unsigned int number;

//     printf("Enter a positive integer: ");
//     scanf("%u", &number);

//     if (is_power_of_2(number)) {
//         printf("%u is a power of 2.\n", number);
//     } else {
//         printf("%u is not a power of 2.\n", number);
//     }

//     return 0;
// }
