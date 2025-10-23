#include <stdio.h>
#include <stdbool.h>
int main()
{
  int n;

  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    char s[51];
    char s2[51];
    scanf("%s %s", &s, &s2);
    int j = 0;
    while (true)
    {
      if (s[j] == '\0' && s2[j] == '\0')
      {
        break;
      }
      else if (s[j] == '\0')
      {
        for (int k = j; s2[k] != '\0'; k++)
        {
          printf("%c", s2[k]);
        }
        break;
      }
      else if (s2[j] == '\0')
      {
        for (int k = j; s[k] != '\0'; k++)
        {
          printf("%c", s[k]);
        }
        break;
      }
      else
      {
        printf("%c%c", s[j], s2[j]);
        j++;
      }
    }
    printf("\n");
  }

  return 0;
}