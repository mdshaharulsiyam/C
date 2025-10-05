#include <stdio.h>
/*
data types
int => 32 bit  4 byte / formate spacefire %d
float => 32 bit  4 byte formate spacefire %f
char => 8 bit  1 byte formate spacefire %c
long long int => 64 bit  8 byte formate spacefire %lld
double => 64 bit  8 byte formate spacefire %lf
*/
/*
max length of int
10~9
*/

/*
input output
printf use for output
scanf for take input
*/
int main()
{
  int a = 999999999;
  long long int b = 9999999999999999;
  float c = 99.99;
  double d = 9999999999.9999;
  char f = 'A';
  scanf("%d %lld %f %lf %c", &a, &b, &c, &d, &f);
  printf("%d %lld %f %lf %c", a, b, c, d, f);
  return 0;
}