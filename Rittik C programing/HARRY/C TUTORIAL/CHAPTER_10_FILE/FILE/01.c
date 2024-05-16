#include<stdio.h>

int main()
{
    FILE *ptr;
    //ptr = fopen("sample.txt","r"); --> for reading the file. 
                                         /* for the reading purpose of a file the file must be
                                            already present in the system means already 
                                            created. */
    ptr = fopen("sample.txt","w");   //--> for writing the file.
                                           /* for writing purpose we do not need to choose a
                                           file which is already present in the system. we can
                                           create a new file using writing mode while using
                                           fopen() function. To cteate a new file we only 
                                           have to write a new name with txt(or other) extention, and
                                           a file with the name you entered will be created
                                           after saving the the program. */
    return 0;
}