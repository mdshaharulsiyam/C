#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int start;
  int arr[n];
  if (n % 2 == 0)
  {
    start = n - 1;
  }
  else
  {
    start = n - 2;
  }
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  for (int i = start; i >= 1; i -= 2)
  {
    printf("%d ", arr[i]);
  }
  return 0;
}