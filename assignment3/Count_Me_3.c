#include <stdio.h>
int main()
{
  int t = 0;
  scanf("%d", &t);
  for (int i = 0; i < t; i++)
  {
    int num = 0, cap = 0, sm = 0;
    char s[10001];
    scanf("%s", s);
    for (int i = 0; s[i] != '\0'; i++)
    {
      if (s[i] >= '0' && s[i] <= '9')
      {
        num++;
      }
      else if (s[i] >= 'a' && s[i] <= 'z')
      {
        sm++;
      }
      else if (s[i] >= 'A' && s[i] <= 'Z')
      {
        cap++;
      }
    }
    printf("%d %d %d\n", cap, sm, num);
  }
  return 0;
}