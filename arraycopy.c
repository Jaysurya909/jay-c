#include<stdio.h>


int main()
{
    int i,a[10],b[10];
    printf("Enter the numbers\n");
    for (i = 0; i < 10; i++)
    {
       scanf("%d",&a[i]);
    }
    for (i = 0; i < 10; i++)
    {
       b[i]=a[i];
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d\n",b[i]);
    }
    
    
    return 0;
}
