#include <stdio.h>
int main()
{
    int pattern;
    printf("Enter the no of pattern you want for\n");
    scanf("%d", &pattern);

    switch (pattern)
    {
    case 1:
        printf("triangular pattern\n*****\n****\n***\n**\n*\n");
        break;

    case 2:
        printf("reverse triangular pattern\n*\n**\n***\n****\n*****\n");

    default:
        break;
    }
    return 0;
}