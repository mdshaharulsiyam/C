#include <stdio.h>
int main()
{
  int n, palindrome = 1;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < (n - 2) / 2; i++)
  {
    if (arr[i] != arr[n - (i + 1)])
    {
      palindrome = 0;
      break;
    }
  }
  if (palindrome > 0)
  {
    printf("YES");
  }
  else
  {
    printf("NO");
  }

  return 0;
}