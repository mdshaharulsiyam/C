#include <stdio.h>

void print_space(int num)
{
  for (int i = 0; i < num; i++)
  {
    printf(" ");
  }
}

void print_star(int num)
{
  for (int i = 0; i < num; i++)
  {
    printf("*");
  }
  printf("\n");
}

int main()
{
  int a;
  scanf("%d", &a);

  for (int i = 0; i < a; i++)
  {
    print_space(a - i - 1);
    print_star(2 * i + 1);
  }

  return 0;
}
