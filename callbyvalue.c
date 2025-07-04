#include<stdio.h>


void swap(int a,int b);

int main()
{
    int a=49,b=90;
    printf("Before swapping a=%d b=%d\n",a,b);
    swap(a,b);
    
    return 0;
}


void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("After sawpping a=%d b=%d",a,b);
}


