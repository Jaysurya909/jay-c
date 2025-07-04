#include <stdio.h>

int main()
{
    int subjectcode;
    printf("Enter your subjectcode\n" );
    scanf("%d" , &subjectcode);

    if (subjectcode == 15)
    {
        printf("You have entered Maths as your subject\n");
        printf("You have won prize of 150$");
    }


   else if (subjectcode < 15)
   {
    printf("You have entered science as your subject\n");
    printf("you have won prize of 150$");
   }

   else if (subjectcode > 15)
   {
    printf("You have entered Maths and science as your subjects\n");
    printf("You have won prize of 300$");
   }
   



   
    
    
    
       








    return 0;
}
