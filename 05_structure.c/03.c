#include <stdio.h>
#include <string.h>
#define max 3

struct student
{
  char name [50];
  int roll_no;
  float marks;
};

int main()
{
  struct student arr_student[max];
  int i;

  for (i = 0; i < max; i++)
  {
    printf("\n Enter details of student %i \n\n", i + 1);

    printf("Enter name:");
    scanf("%s", &arr_student[i].name);

    printf("Enter roll no:");
    scanf("%i", &arr_student[i].roll_no);

    printf("Enter marks:");
    scanf("%f", &arr_student[i].marks);
  }

  printf("\n");

  printf("name\troll_no\tmarks\n");

  for (i = 0; i < max; i++)

  {
    printf("%s\t%i\t%.2f\n", arr_student[i].name, arr_student[i].roll_no, arr_student[i].marks);
 
  }
  return 0;
}