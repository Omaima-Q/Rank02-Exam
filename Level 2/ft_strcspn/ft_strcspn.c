// Needed for size_t
#include <stdio.h>

size_t ft_strcspn(const char *s, const char *reject)
{
    size_t i;
    size_t j;
    
    i = 0;
    // Looping over the whole string
    while(s[i])
    {
        j = 0;
        // Check the current string char against every char in charset
        while (reject[j])
        {
            // If character found, return index in current string
            if (s[i] == reject[j])
            	return (i);
            j++;
        }
        i++;
    }
    // If we spanned the whole string, return i, in that case the
    // rejected char found is the NULL-terminating one
    return (i);
}

// int main()
// {
//     char s1[] = "omaima";
//     char reject[] = "a";

//     printf("%zu", ft_strcspn(s1, reject));
// }
