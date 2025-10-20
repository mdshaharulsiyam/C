#include <stdio.h>
#include <string.h>
int main()
{
  char s[1001];
  char t[1001];
  scanf("%s", &s);
  scanf("%s", &t);
  int slen = strlen(s);
  int tlen = strlen(t);
  printf("%d %d\n%s %s", slen, tlen, s, t);
  return 0;
}