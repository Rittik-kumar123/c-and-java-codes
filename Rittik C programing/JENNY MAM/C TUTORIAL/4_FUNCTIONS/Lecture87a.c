   //CALL BY VALUE FUNCTION 

  #include<stdio.h>
  void fun(int , int);   // function decleration
  int main()
  {
      int x=5,y=7;
      fun(x,y);          // function calling
      printf("Inside the main function (also known as calling function):\n");
      printf("The value of x is %d and y is %d\n",x,y);
      return 0;
  }
  void fun(int x, int y)  // function defination 
  {
      x=7;
      y=5;
      printf("Inside the fun function (also known as called function):\n");
      printf("The value of x is %d and y id %d\n",x,y);   /* only here the new assigned value to variable x 
                                                             and y will be printed. Any change in values of
                                                             x and y outside the main function will not 
                                                             change the actual value of the variable i.e.,
                                                             assigned in the main function. From here we 
                                                             can conclude that only a copy of the variables
                                                             is used in other funcions, while using call by
                                                             value method. */
  }