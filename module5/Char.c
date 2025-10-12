#include <stdio.h>
int main()
{
  int a;
  scanf("%c", &a);
  if (a > 91)
  {
    printf("%c", a - 32);
  }
  else
  {
    printf("%c", a + 32);
  }
  return 0;
}