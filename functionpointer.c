#include <stdio.h>

int sum(int a,int b)
{
    return a + b;
}

int main()
{
      
   int (*fPtr) (int , int);
   fPtr = &sum;
   int d = (*fPtr)(4,9);
   printf("the value of d is %d", d);


     return 0;
}