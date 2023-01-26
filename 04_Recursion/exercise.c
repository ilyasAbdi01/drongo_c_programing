#include <stdio.h>

void BMI(int, float);

int main(void)
{
  int m;
  float h;

  printf("enter your mass :");
  scanf("%i", &m);
  printf("enter your height:");
  scanf("%f", &h);
  BMI(m, h);
}

void BMI(int m, float h)
{
  float BMI = m / (h * h)*703.1;
  printf("BMI = %f\n", BMI);

  if (BMI < 15)
  {
    printf("very severely underweight\n");
  }

  else if (BMI < 20)
  {
    printf("severely underweight\n");
  }

  else if (BMI < 25)
  {
    printf("underweight\n");
  }

  else if (BMI < 30)
  {
    printf("normal\n");
  }

  else if (BMI < 30)
  {
    printf("overweight\n");
  }

  else if (BMI < 35)
  {
    printf("obese class I\n");
  }

  else if (BMI < 40)
  {
    printf("obese class II\n");
  }

  else
  {
    printf("obese class III\n");
  }
}

// int main()
// {
//   int square , number;
//   printf("Please Enter any integer Value : ");
//   scanf("%i", &number);
//   square = number * number;
//   printf("square of  %i is = %i\n", number, square);
//   return 0;
// }
