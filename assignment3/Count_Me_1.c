#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int count2 = 0, count3 = 0;
  for (int i = 0; i < n; i++)
  {
    int x;
    scanf("%d", &x);
    if (x % 2 == 0)
    {
      count2++;
    }
    else if (x % 3 == 0)
    {
      count3++;
    }
  }
  printf("%d %d", count2, count3);
  return 0;
}