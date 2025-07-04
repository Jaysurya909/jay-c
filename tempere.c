#include <stdio.h>
int main()
{
    int new[2][4]={{24,34,56,78},
                   {31,80,545,43}};

// for (int i = 0; i < 2; i++)
// {
//     for (int j = 0; j < 4; j++)
//     {
//       printf("%d ",new[i][j]);
//     }
//     printf("\n");
//  }

printf("%d",*(new[]));


     return 0;
}