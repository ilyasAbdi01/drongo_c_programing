#include <stdio.h>

void main()
{
  int a = 45;
  int *y;
  y = &a;
  
  printf("%i \n", a);
  printf("%i \n", *y);

  *y = 75;

  printf("%i \n", a);
  printf("%i \n", *y);
}