#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  char s[n + 1];
  scanf("%s", &s);
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    count += s[i] - 48;
  }
  printf("%d", count);
  return 0;
}