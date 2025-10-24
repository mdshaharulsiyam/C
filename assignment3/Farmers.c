#include <stdio.h>
int main()
{
  int t = 0;
  scanf("%d", &t);
  for (int i = 0; i < t; i++)
  {
    int m1, m2, d;
    scanf("%d %d %d", &m1, &m2, &d);
    int day = (m1 * d) / (m1 + m2);
    printf("%d\n", d - day);
  }
  return 0;
}