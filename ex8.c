#include <stdio.h>
#include <stdlib.h>



int main()
{
   int *ptr;
   int n;
    
   printf("Enter the size of the eid you wanna create\n");
   scanf("%d" , &n);

   ptr = (int *)calloc(n , sizeof(int));
   for (int i = 0; i < n; i++)
   {
    printf("Enter the characters in your eid %d\n" , i);
    scanf("%d" , &ptr[i]);
     printf("The characters in eid %d are %d\n",i,ptr[i]);
     
   }

   
   


    
     return 0;
}