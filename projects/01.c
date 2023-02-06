#include <stdio.h>

int main()
{

  int num, num2, num3, num4, year, result;

  printf("Pick number btn 2-10:  ");
  scanf("%i", &num);
  printf("\n");

  num = num * 2;

  num2 = num + 5;

  num3 = num2 * 50;

  num4 = num3 + 1773;

  printf("Enter the year you were born:  ");
  scanf("%i", &year);

  year = num4 - year;

  printf("\n%i\n\n", year);

  printf("The first digit is the number you picked and 
   the last two are your age\n");
}