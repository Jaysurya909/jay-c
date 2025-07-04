#include<stdio.h>



int main()
{
    int leap;
    printf("Enter the year\n");
    scanf("%d",&leap);
    if ((leap%4==0)&&(leap%100!=0))
    {
        printf("This is a leap year\n");
    }
    else
    {
        printf("This is not a leap year\n");
    }
    
    return 0;
}
