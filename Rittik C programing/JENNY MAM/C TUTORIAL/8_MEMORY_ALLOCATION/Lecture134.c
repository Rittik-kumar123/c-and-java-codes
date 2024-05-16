/* Use of calloc().
   --> the main difference between calloc and malloc is that calloc allocate multiple block of memory 
       while malloc allocate a single block of memory.
   --> calloc initilize each block with 0 while malloc initilize the block with garbage value.  */

  #include<stdio.h>
  #include<stdlib.h>
  int main()
  {
      int n,i,*ptr;
      printf("Enter total number of values to be entred: ");
      scanf("%d",&n);
      
      ptr=(int*)calloc(n,sizeof(int));
    //   for(i=0;i<n;i++)
    //   {
    //       scanf("%d",ptr+i);
    //   }
      printf("\nThe values you entered are: ");
      for(i=0;i<n;i++)
      {
          printf(" %d\t",*(ptr+i));
      }
      free(ptr);
      return 0;
  }