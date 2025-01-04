#include <stdio.h>
#include <stdlib.h>

int is_prime(int num) 
{
    if (num <= 1) return 0;
    if (num == 2) return 1;
    if (num % 2 == 0) return 0;

    int i = 3; // Start checking from the first odd number greater than 2
    while (i * i <= num) 
    { // Continue while i squared is less than or equal to num
        if (num % i == 0) return 0; // If num is divisible by i, it's not prime
        i += 2; // Check only odd numbers
    }
    return 1; // If no divisors were found, num is prime
}

int main(int argc, char **argv) 
{
    if (argc != 2) 
    {
        printf("0\n");
        return 0;
    }
    
    int num = atoi(argv[1]);
    if (num <= 0) 
    {
        printf("0\n");
        return 0;
    }

    int sum = 0;
    int i = 2;
    while (i <= num)
    {
        if (is_prime(i))
            sum += i;
        i++;
    }
    printf("%d\n", sum);
    return 0;
}

