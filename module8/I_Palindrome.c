#include <stdio.h>
#include <string.h>
int main()
{
  char s[1001], palindrome = 1;
  scanf("%s", &s);
  int slen = strlen(s);
  for (int i = 0; i < slen; i++)
  {
    if (s[i] != s[slen - 1 - i])
    {
      palindrome = 0;
      break;
    }
  }
  if (palindrome)
  {
    printf("YES");
  }
  else
  {
    printf("NO");
  }
  return 0;
}