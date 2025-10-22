#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main()
{
  char s1[21];
  char s2[21];
  scanf("%s", s1);
  scanf("%s", s2);
  int s1len = strlen(s1);
  int s2len = strlen(s2);
  for (int i = 0; i <= s2len; i++)
  {
    s1[s1len - i] = s2[i]
  }

  return 0;
}