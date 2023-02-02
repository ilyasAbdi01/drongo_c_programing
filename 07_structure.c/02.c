#include <stdio.h>
#include <string>

struct student
{
  char name[50];
  int class;
  char section;
}student1;

int main()
{
  struct student student1={"Drongo", 1, 'A'};

  printf("Student Name: %s\n", student1.name);
  printf("Student Class: %s\n", student1.class);
  printf("Student Section: %s\n", student1.section);
}
