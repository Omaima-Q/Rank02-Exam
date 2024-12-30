char *ft_strrev(char *str)
{
    int i = -1; // Initialize index i to -1
    int length = 0; // Initialize length to 0
    char temporary; // Temporary variable for swapping characters

    // Calculate the length of the string
    while (str[length]) // Loop until we reach the null terminator
        length++; // Increment length for each character

    // Reverse the string in place
    while (++i < length / 2) // Loop until the middle of the string
    {
        temporary = str[i]; // Store the current character in temporary
        str[i] = str[length - 1 - i]; // Swap the characters
        str[length - 1 - i] = temporary; // Complete the swap
    }
    return (str); // Return the reversed string
}
