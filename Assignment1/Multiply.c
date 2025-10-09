#include <stdio.h>
int main()
{
  int a;
  int b;
  scanf("%d %d", &a, &b);
  long long int c = (long long)a * b;
  printf("%lld", c);
  return 0;
}