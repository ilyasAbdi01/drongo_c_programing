#include <stdio.h>

int main ()
 {
  char operator ;
  int n1=14 , n2=5, result;
  printf ("enter an oparator (+,-,*./):");
  scanf("%c", &operator);

  switch (operator){
    case '+':
printf ("restult=%d", n1+n2);
break;
case '-':
printf("result=%d", n1-n2);
break;
case'*':
printf("result=%d", n1*n2);
break;
case'/':
printf("result=%d", n1/n2);
break;
default:
printf("Error! oparator is not correct");
  }

 }
