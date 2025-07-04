#include <stdio.h>
#define PI 3.14
int main()
{
    int a=6;
    const float b=3.333;
    //b=4; wrong coz b is constant
        //printf("The value of a is %d and the value of b is %.f\n" , a, b);
         printf("%.4f\n" , b);
         printf("this is a tab \t %f" , PI); 
         
    return 0;
}
