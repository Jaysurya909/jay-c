#include <stdio.h>

int b = 34;

int ret()
{
    return 34 *2;
}

int func1(int b1)
{

    static int myvar = 50;
    printf("the value of myvar is %d\n", myvar);
    myvar++;
    // printf("The value of b inside func1 is %d\n" , b);
    // printf("the address of b in func1 is %d\n" , &b);
    return b1 + myvar;
}

int main()
{
    int b = 344;
    // printf("The address of b in main is %d\n" , &b);
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    int *ptr = &val;
    // printf("the value of func1 is %d\n" , val);

    return 0;
}