#include<stdio.h>

int main()
{
  FILE *fpt;
  
  char ch ='b';
  fpt=fopen("generated1.txt","w");
  fputc(ch,fpt);
  fclose(fpt);

    return 0;           /* after saving the file generated.txt file will be created in the folder
                           and inside the file the input from the fprintf() will be saved. */
}