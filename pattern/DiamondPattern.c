#include <stdio.h>
void print_space(int num)
{
  for (int i = 1; i <= num; i++)
    printf(" ");
}

void print_star(int num)
{
  for (int i = 1; i <= num; i++)
    printf("*");
  printf("\n");
}
int main()
{
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    print_space(n - i - 1);
    print_star(2 * i + 1);
  }
  for (int i = n - 1; i > 0; i--)
  {
    print_space(n - i);
    print_star(2 * i - 1);
  }
}