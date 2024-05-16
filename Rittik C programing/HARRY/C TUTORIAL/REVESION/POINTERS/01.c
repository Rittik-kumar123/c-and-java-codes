/* write a programme to find the address of a variable. Use this address
   to get the value of this varible. */
  #include<stdio.h>
  
  int main()
  {
      int a=5;
      int *ptr=&a;
      printf("The address of a is %d\n",&a);
      printf("The address of a is %d\n",ptr);
      printf("The value of a is %d\n",a);
      printf("The value of a is %d\n",*ptr);
      return 0;
  }