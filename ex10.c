#include <stdio.h>
#include <string.h>




int main()
{
    int num , number;
    printf("Enter the number\n");
    scanf("%d" , &num); 
    puts(strrev(num));
    scanf("%d" , &number);
   if (num == number)
   {
    return 1;
   }
   else
   {
    return 0;
   }
         
     



    
     return 0;
}