#include <stdio.h>
#include <stdlib.h>

char    **ft_split(char *str)
{
  char **split = malloc(1024);
  int i = 0;
  int j = 0;
  int k = 0;
  char *word;

  while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')) // skip whitespaces 
      i++;
  while(str[i])
  {
      split[j] = malloc(1024); // allocates memory for the new string 
      word = split[j]; // save the new string in word
      while(str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')) // when i reach 
        // the first word copy it in word until i reach whitespace
          word[k++] = str[i++]; 
      while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')) // skip the whitespace after the first word
          i++;
      word[k] = '\0'; // null terminate the copied word 
      j++; // The index j is incremented to move to the next position in the split array
  }
  split[j] = NULL; // The last element of the split array is set to NULL to indicate the end of the array of words.
return (0);
}

// int main() 
// {
//     char *input = "Hello,   world! This is a test.";
//     char **result = ft_split(input);
    
//     int i = 0; // Initialize index
//     while (result[i] != NULL) 
//     { // Loop until we reach the end of the array
//         printf("Word %d: %s ", i, result[i]);
//         free(result[i]); // Free each allocated word
//         i++; // Increment index
//     }
    
//     free(result); // Free the array of pointers
//     return 0; // Return success
// }

      
