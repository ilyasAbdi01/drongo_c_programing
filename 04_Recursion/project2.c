#include <stdio.h>
int discount();
int sphere();

int main()
{
  discount();
  sphere();
}

int discount()
{
double discount, total, expensive, less_expensive;
  printf("enter the cost of the expensive item:");
  scanf("%lf", &expensive);
   
   printf("enter the cost of less_expensive item:");
   scanf("%lf", &less_expensive);

   if (expensive>less_expensive)
   {
    discount= less_expensive*0.5;
    total =expensive+discount;
    printf("the grand total %.3lf =\n", total);
   }
}

int sphere()
{
  double r, area, volume, pi = 3.142;
  printf("enter the radius r:");
  scanf("%lf", &r);
  if (r > 0)
  {
    area = 4 * (pi * r * r);
    printf("area %.3lf =\n", area);

    volume = 4 / 3 * (pi * r * r * r);
    printf("volume %.3lf=\n", volume);
  }
  else
  {
    printf("error");
  }
  return 0;
}