#include <stdio.h>

int farrays();

void main()

{
  farrays();
}

int farrays()
{

  int max;

  printf("how many inputs do you need\n");
  scanf("%i", &max);
  int array_numbers[max];
  for (int i = 0; i < max; i++)
  {
    int number;
    scanf("%i", &number);
    array_numbers[i] = number;
    printf("the value at index %i is %i \n", i, number);
  }
}