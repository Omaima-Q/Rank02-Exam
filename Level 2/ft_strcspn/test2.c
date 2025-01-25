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
    if (!is_char_in_string(*s, reject)) // the difference between reject and accept is just ! not
      count++;
    else
      break ;
    s++;
  }
  return (count);
}

