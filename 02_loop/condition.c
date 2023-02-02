#include <stdio.h>

void main()
{
int grade;
printf("enter grade:");
scanf("%i" ,&grade);
    
if (grade > 80){
  printf("A\n");
}

else if (grade > 70){
printf("B\n");}

else if(grade > 60)
{
  printf("C\n");
}

else if(grade > 50)
{
  printf("D\n");
}

else if (grade > 40)
{
  printf("E\n");

}

else {
  printf("fail\n");
}
}