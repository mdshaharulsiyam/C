#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int arr[n], min_idx = 0, max_idx = 0;
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
    if (arr[max_idx] < arr[i])
    {
      max_idx = i;
    }
    if (arr[min_idx] > arr[i])
    {
      min_idx = i;
    }
  }
  int temp = arr[max_idx];
  arr[max_idx] = arr[min_idx];
  arr[min_idx] = temp;
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}