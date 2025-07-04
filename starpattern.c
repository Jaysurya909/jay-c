#include <stdio.h>

void starpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void reversestarpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++) 
        {   
            printf("*");
        }
        printf("\n");
    }
    
}
int main()
{
    int rows, type;
    printf("1.Enter 0 for starpattern\n2.Enter 1 for reverse starpattern\n");
    scanf("%d", &type);
    printf("How many rows do u want to print\n");
    scanf("%d", &rows);
    switch (type)
    {
    case 0:
        starpattern(rows);
        break;

    case 1:
        reversestarpattern(rows);
        break;    

    default:
        printf("You have entered invalid choice");
        break;
    }

    return 0;
}