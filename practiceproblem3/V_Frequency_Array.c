#include <stdio.h>
int main()
{
  int size, number;
  scanf("%d %d", &size, &number);
  int arr[size];
  int fre[100001] = {0};
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
    if (arr[i] <= number)
    {
      fre[arr[i]] = fre[arr[i]] + 1;
    }
  }
  for (int i = 1; i <= number; i++)
  {
    printf("%d\n", fre[i]);
  }

  return 0;
}