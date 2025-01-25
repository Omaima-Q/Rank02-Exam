#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
  int  tmp = end;
  end = start;
  start = tmp; // just do the swap here 

  int  *res;
  int  size;
  int  i = -1;

  if (start < end)
  {
    size = end - start + 1;
    res = malloc(sizeof(int) * size);
  }
  else if (start > end)
  {
    size = start - end + 1;
    res = malloc(sizeof(int) * size);
  }
  else
  {
    size = start - end + 1;
    res = malloc(sizeof(int) * size);
  }
  if (res)
    while (++i < size)
      res[i] = start--;
  return (res);
}

static int  ft_abs(int x)
{
  if (x < 0)
    return (-x);
  return (x);
}

#include <stdio.h>

int  main(int ac, char **av)
{
  ac += 0;
  int  a = atoi(av[1]);
  int  b = atoi(av[2]);
  int  s = ft_abs(a - b) + 1;
  int *result = ft_rrange(a, b);
  int  i = -1;
  
  while (++i < s)
    printf("%d ", result[i]);
  printf("\n");
}
