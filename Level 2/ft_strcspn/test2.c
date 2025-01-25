#include <string.h>
#include <stdio.h>

int  is_char_in_string(char c, const char *str)
{
  while (*str)
    if (*str++ == c)
      return (1);
  return (0);
}

size_t  ft_strcspn(const char *s, const char *reject)
{
  size_t  count = 0;

  while (*s)
  {
    if (!is_char_in_string(*s, reject))
      count++;
    else
      break ;
    s++;
  }
  return (count);
}

// size_t  ft_strspn(const char *s, const char *accept)
// {
//   size_t  count = 0;

//   while (*s)
//   {
//     if (is_char_in_string(*s, accept))
//       count++;
//     else
//       break ;
//     s++;
//   }
//   return (count);
// }
