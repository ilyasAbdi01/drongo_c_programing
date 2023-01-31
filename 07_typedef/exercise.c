#include <stdio.h>

int main()
{
  int x;
  printf("Enter an intager :");
  scanf("%i", &x);
  int sum = 0; 

  while (x != 0)
  {
    sum = sum + x % 10;
    x = x / 10;
    // printf("%i\n", sum);
  }

  printf("%i\n", sum);

  return 0;
}

