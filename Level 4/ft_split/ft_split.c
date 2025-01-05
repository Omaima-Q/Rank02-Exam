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
      k = 0; // Reset k for each new word
      while(str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')) // when i reach 
        // the first word copy it in word until i reach whitespace
          word[k++] = str[i++]; 
      while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')) // skip the whitespace after the first word
          i++;
      word[k] = '\0'; // null terminate the copied word 
      j++; // The index j is incremented to move to the next position in the split array
  }
  split[j] = NULL; // The last element of the split array is set to NULL to indicate the end of the array of words.
  return (split);
}

// int main() {
//     char str[] = "Hello, this is a test string to be split.";
//     char **words = ft_split(str);

//     printf("The words in the string are:\n");
//     for (int i = 0; words[i] != NULL; i++) {
//         printf("%s\n", words[i]);
//         free(words[i]); // Free each word's allocated memory
//     }
//     free(words); // Free the split array

//     return 0;
// }

      
