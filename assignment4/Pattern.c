#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int count = 1;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 0; j < n - i; j++)
    {
      printf(" ");
    }
    if (i % 2 == 0)
    {
      for (int j = 1; j <= count; j++)
      {
        printf("-");
      }
    }
    else
    {
      for (int j = 1; j <= count; j++)
      {
        printf("#");
      }
    }
    if (i == n)
    {
      count -= 2;
    }
    else
    {
      count += 2;
    }
    printf("\n");
  }
  for (int i = n - 1; i > 0; i--)
  {
    for (int j = 0; j < n - i; j++)
    {
      printf(" ");
    }
    if (i % 2 == 0)
    {
      for (int j = 1; j <= count; j++)
      {
        printf("-");
      }
    }
    else
    {
      for (int j = 1; j <= count; j++)
      {
        printf("#");
      }
    }
    count -= 2;
    printf("\n");
  }
  return 0;
}