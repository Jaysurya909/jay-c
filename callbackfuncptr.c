#include <stdio.h>

int sum(int a , int b )
{
    return a + b;

}

void greethelloandexecute(int(*fptr)(int , int))
{
    printf("Hello user\n");
    printf("the sum of 8 and 7 is %d", fptr(8,7));
}

void greetgoodmorningandexecute(int(*fptr)(int, int))
{
    printf("Good morning user\n");
    printf("The sum of 5 and 7 is %d" , fptr(5,7));
}

void greetgoodafternoonandexecute(int(*fptr)(int , int))
{
    printf("Goof afternoon user\n");
    printf("The sum of 5 + 8 is %d", fptr(5,8));
}

void greetgoodnightandexecute(int(*fptr)(int , int))
{
    printf("Goof afternoon user\n");
    printf("The sum of 5 + 8 is %d", fptr(5,8));
}







int main()
{
    int (*ptr) (int , int);
    ptr = sum;
    greetgoodafternoonandexecute(ptr);



     return 0;
}