#include <stdio.h>
#include <string.h>

int main()
{
  FILE *filePointer;

  char dataToBeWritten[50] = "Drongo Collage of Technology and Innovation";

  filePointer = fopen("drongo.c", "w");

  if (filePointer == NULL)
  {
    printf("drongo.c file failed to open.");
  }
  else
  {
    printf("The file is now opened.\n");

    if (strlen(dataToBeWritten) > 0)
    {
      fputs(dataToBeWritten, filePointer);
      // fprintf(filePointer, "Adding another Input\n");
      // fputs("\n", filePointer);
    }
    fclose(filePointer);

    printf("Data succesfully written in the file drongo.c\n");
    printf("The file is now closed.");
  }
}