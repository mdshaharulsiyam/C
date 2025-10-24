#include <stdio.h>
int main()
{
  char s[100001];
  scanf("%s", s);
  // aeiou
  int count = 0;
  for (int i = 0; s[i] != '\0'; i++)
  {
    char val = s[i];
    if (val != 'a' && val != 'e' && val != 'i' && val != 'o' && val != 'u')
    {
      count++;
    }
  }
  printf("%d", count);
  return 0;
}