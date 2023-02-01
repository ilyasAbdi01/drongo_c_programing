#include <stdio.h>

int main()
{
  int pass, x = 10;
  while (x != 0)
    printf("\nInput the password");
  scanf("%i", &pass);
  x = 0;

  if (x == 1234)
  {
    printf("correct password");
  }
  else
  {
    printf("incorrect password, try another");
  }

  return 0;
}

// int main()
// {
//   int x;
//   printf("Enter an intager :");
//   scanf("%i", &x);
//   int sum = 0;

//   while (x != 0)
//   {
//     sum = sum + x % 10;
//     x = x / 10;
//     // printf("%i\n", sum);
//   }

//   printf("%i\n", sum);

//   return 0;
// }
