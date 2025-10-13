#include <stdio.h>
int main()
{
  int t;
  scanf("%d", &t);
  for (int i = 1; i <= t; i++)
  {
    int a;
    scanf("%d", &a);
    while (a != 0)
    {
      printf("%d ", a % 10);
      a /= 10;
    };
    printf("\n");
  }
  return 0;
}