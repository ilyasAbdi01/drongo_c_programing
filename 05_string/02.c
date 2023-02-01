#include <stdio.h>
void main()
{
  char str[30];

  printf("Enter line of text:\n");
  fgets(str, sizeof(str), stdin);

  printf("You entered :\n");
  puts(str);
}