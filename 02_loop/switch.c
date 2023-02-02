#include <stdio.h>

int main()
{
  char operator;
  int n1, n2 , result;
  printf("enter an oparator (+,-,*./):");
  scanf("%c", &operator);

  printf("enter an intager:");
  scanf("%i", &n1);
  printf("enter an intager:");
  scanf("%i", &n2);


  switch (operator)
  {
  case '+':
    printf("restult=%d\n", n1 + n2);
    break;
  case '-':
    printf("result=%d\n", n1 - n2);
    break;
  case '*':
    printf("result=%d\n", n1 * n2);
    break;
  case '/':
    printf("result=%d\n", n1 / n2);
    break;
  default:
    printf("Error! oparator is incorrect");
  }
}
