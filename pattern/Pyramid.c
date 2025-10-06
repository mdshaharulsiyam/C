#include <stdio.h>
void print_space(int num)
{
  for (int i = 1; i <= num; i++)
  {
    printf(" ");
  }
}
void print_start(int num)
{
  for (int i = 1; i <= num; i++)
  {
    printf(" *");
  }
  printf("\n");
}
int main()
{
  int a = 6;
  scanf("%d", &a);
  for (int i = 0; i < a; i++)
  {
    if (i == 0)
    {
      print_space(a - i);
      print_start(1);
    }
    else
    {
      print_space(a - (i + 1));
      print_start(i + 2);
    }
  }
  return 0;
}