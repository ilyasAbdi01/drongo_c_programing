#include <stdio.h>
#include <string.h>

union Data

{
  int i;
  float f;
  char str[10];
};

int main()
{
  union Data data;

  printf("Memory size occupied by data: %li\n", sizeof(data));
  return 0;
}
