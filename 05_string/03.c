#include <stdio.h>
#include <stdio.h>

int main()
{
  char ch;
  char s[20];
  int i=0;

  printf("Enter a number or string\n");
  while ((ch = getchar()) !='\n')
  {
    s[i] = ch;
    i++;
  }
  printf("Original number/string: %s\n", s);

  printf("reverse number/string:");
  while(0<= i--)
  {
    putchar(s[i]);
  }
  return 0;
}