#include <stdio.h>
#include <stdbool.h>
#include "login.h"

int main ()
{
  bool log =user_login(01234567);
  if(log){
    printf("success\n");
  }
  else{
    printf("wrong\n");
  }
  return 0;
}