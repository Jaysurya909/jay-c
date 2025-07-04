#include<stdio.h>


int main()
{
    int a,i,n=0;
    printf("Enter the numbers\n");
    
    for (i = 0; i < 10; i++)
    {
        scanf("%d",&a);
        if (a>n)
        {
            n=a;
        }
        
    }
      
    printf("Laregest number is %d",n);


    return 0;
}
