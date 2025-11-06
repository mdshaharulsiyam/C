#include <stdio.h>
#include <string.h>
int is_palindrome(char s[])
{
  int palindrome = 1;
  int slen = strlen(s);
  for (int i = 0; i < slen; i++)
  {
    if (s[i] != s[slen - 1 - i])
    {
      palindrome = 0;
      break;
    }
  }
  return palindrome;
}
int main()
{
  char s[1001];
  scanf("%s", s);
  int palindrome = is_palindrome(s);

  if (palindrome)
  {
    printf("Palindrome");
  }
  else
  {
    printf("Not Palindrome");
  }
  return 0;
}