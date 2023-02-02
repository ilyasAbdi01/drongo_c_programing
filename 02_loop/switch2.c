#include <stdio.h>

void signup();

int main()
{
  int number;
  
  printf("Enter a number 1 to 3:");
  scanf("%i", &number);
  switch(number)
  {
    case 1:
    printf("Login\n");
    break;

    case 2:
    signup();
    break;

    case 3:
    printf("Forgot password\n");
    break;

    default:
    printf("Please select the correct option\n");
    break;
  }
  printf("Outside\n");
}

void signup(){
  printf("User signing up\n");
}