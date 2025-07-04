#include <stdio.h>

void swap(int* address)
{
    *address = 7 ; 
}

void cvalue(int* add)
{
    *add = 1;
}



int main()
{
    int a = 3 , b = 4;
     
      printf("The value of a is %d and b is %d\n" , a ,b);
      swap(&a);
      printf("The value of a is now %d\n",a);

      cvalue(&b);
      printf("The value of b is now %d\n",b);
   



     return 0;
}