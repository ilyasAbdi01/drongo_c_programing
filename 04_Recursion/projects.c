#include <stdio.h>


void main()
{
  int employee;
  double total_bill, new_sale, discount;
  double tax = 0.0735;
  printf("the total bill amount:\n");
  scanf("%lf ", &total_bill);

  printf("enter 1 : for employees or 2: for non_emlpoyees\n");
  scanf("%i", &employee);

  if (employee == 1)
  {
    discount = total_bill - (total_bill * 0.15);
    total_bill = discount + (discount * tax);
    printf("total bill is %.3lf \n", total_bill);
  }

  else
  {
    total_bill = total_bill +(total_bill * tax);
    printf("total bill is %.3lf \n", total_bill);
  }
}

// int main()
// {
//   int total_days, Days, Weeks, Years;
//   printf("enter number of day:");
//   scanf("%i", &total_days);

//   Years = total_days /365;
//   printf("the years are %i \n" ,Years);

//   Weeks = (total_days %365) / 7;
//   printf("the Weeks are %i \n", Weeks);

//   Days = (total_days %365) % 7;
//   printf("the Days are %i \n", Days);
// }