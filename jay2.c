#include <stdio.h>
int main()
{
    char a = 5 ;
    char* ptra = &a;
    printf("%d\n" , a);
    ptra --;

    printf("%d\n" , ptra);
    printf("%d" , ptra-2);
     return 0;
}