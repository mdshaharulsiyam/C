#include <stdio.h>
int main()
{
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  if (a <= b)
  {
    if (a >= c)
    {
      printf("%d %d", c, b);
    }
    else
    {
      if (b >= c)
      {
        printf("%d %d", a, b);
      }
      else
      {
        printf("%d %d", a, c);
      }
    }
  }
  else
  {
    if (b >= c)
    {
      printf("%d %d", c, a);
    }
    else
    {
      if (c >= a)
      {
        printf("%d %d", b, c);
      }
      else
      {
        printf("%d %d", b, a);
      }
    }
  }
  return 0;
}