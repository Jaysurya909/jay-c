#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generaterandomnumber(int n){
    srand(time(NULL));
    return rand()%n;
}


int main()
{
    printf("The random number between 0 to 3 is %d\n" , generaterandomnumber(3));
    
     return 0;
}