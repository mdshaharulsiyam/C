#include <stdio.h>
int main()
{
  char s[10001];
  scanf("%s", s);
  int freq[26] = {0};
  for (int i = 0; s[i] != '\0'; i++)
  {
    int val = s[i] - 'a';
    freq[val]++;
  }
  for (int i = 0; i < 26; i++)
  {
    if (freq[i] > 0)
    {
      printf("%c - %d\n", i + 'a', freq[i]);
    }
  }
  return 0;
}