#include <stdio.h>

int main()
{
 int number;

printf("enter the number:");
scanf("%d", &number);
 
if (number % 2 == 0)
{
printf("%d number is even\n.", number);}
  
else 
{
printf("%d the number is an odd.", number);
}                          
 return 0; 

}
