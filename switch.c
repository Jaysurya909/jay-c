#include <stdio.h>

int main()
{
    int age , marks;
    printf("Enter your age\n");
    scanf("%d" , &age);
    
    printf("Enter your marks\n"); 
    scanf("%d" , &marks);


    switch (age)
    {
    case 3:
        printf("The age is 3\n");
         switch (marks)
        {
        case 45:
            printf("The marks are 45");
            break;
        
        default:
             printf("The marks are not 45");
            break;
        }
        break;
    case 24:
        printf("The age is 24\n");
        break;
    case 25:
        printf("The age is 25\n");
        break;
    
    default:
        printf("The age is not given\n");
       
     break;
    }
    
    return 0;
}
