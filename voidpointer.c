#include <stdio.h>
int main()
{
   int a = 30;
   float b = 3.5;
   void *ptr;
   ptr = &b;
   printf("The value of b is %f\n" , *((float*)ptr));
   ptr = &a;
    
 







     return 0;
}