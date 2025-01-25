#include <stdlib.h>

int    ft_abs(int x)
{
  if (x < 0)
    return (-x);
  return (x);
}

int     *ft_range(int start, int end)
{
  int  len = ft_abs(start - end) + 1;

  int  *result = malloc(sizeof(int) * len);

  int  i = 0;

  if (result == NULL)
    return (NULL);

  while (i < len)
  {
    if (start < end)
    {
      result[i] = start;
      start++;
      i++;
    }
    else
    {
      result[i] = start;
      start--;
      i++;
    }
  }
  return (result);
}

#include <stdio.h>
int  main()
{
  int *result = ft_range(1, 3);
  printf("%d", result[0]);
  printf("%d", result[1]);
  printf("%d", result[2]);
}
