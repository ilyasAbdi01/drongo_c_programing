#include <stdio.h>

void main()
{
  int scores[] = {80, 60, 50, 30, 10};
  int pass = 0, fail = 0;
  for (int x = 0; x < 5; x++)
  {
    // printf(" %i\n", scores[x]/10);
    if (scores[x] > 50)
    {
      //  printf("pass\n");
      
      pass = pass + 1;
    }
    else
    {
      //  printf("fail\n");
      fail = fail + 1;
    }
    printf("pass %i\n", pass);
    printf("fail %i\n", fail);
    printf("\n");
  }
}