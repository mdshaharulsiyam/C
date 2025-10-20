#include <stdio.h>
#include <limits.h>

int main()
{
  int t;
  scanf("%d", &t);
  while (t != 0)
  {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      scanf("%d", &arr[i]);
    }

    int smallest = INT_MAX;

    for (int i = 0; i < n; i++)
    {
      for (int j = i + 1; j < n; j++)
      {
        int sum = arr[i] + arr[j] + (j - i);
        if (sum < smallest)
        {
          smallest = sum;
        }
      }
    }
    printf("%d\n", smallest);
    t--;
  }
  return 0;
}
