char *ft_strrev(char *str)
{
    int i = -1; // Initialize index i to -1 (This variable i is used to index the 
    // characters in the string. It starts at -1 so that when we 
    //increment it in the loop, it starts from 0)
    int length = 0; // Initialize length to 0
    char temporary; // Temporary variable for swapping characters

    // Calculate the length of the string
    while (str[length]) // Loop until we reach the null terminator
        length++; // Increment length for each character

    // Reverse the string in place
    while (++i < length / 2) // Loop until the middle of the string ( ++i skips -1 to start from 0)
    {
        temporary = str[i]; // Store the current character in temporary
        str[i] = str[length - 1 - i]; // Swap the characters
        str[length - 1 - i] = temporary; // Complete the swap
    }
    return (str); // Return the reversed string
}


// #include <stdio.h>
// 
// int main()
// {
//     char str[] = "Hello, World!";
    
//     printf("Original String: %s\n", str);
//     ft_strrev(str);
//     printf("Reversed String: %s\n", str);

//     return 0;
// }



