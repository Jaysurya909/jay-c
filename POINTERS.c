#include <stdio.h>

int main()
{
    int a = 6;
    int *ptra = &a;
    int *ptra2 = NULL;
    printf("The address of pointer to a is %x\n" , &ptra);
    printf("The value of a is %d\n" , *ptra);
    printf("The address of a is %x\n" , &a);
    printf("The address of a is %x\n" , ptra);
    printf("The  of a is %d\n" , a);
    printf("The  of a is %p\n" , ptra2);
    

    
    return 0;
}
