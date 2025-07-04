#include <stdio.h>

int main()
{
    int marks[2][4] = {{50, 60, 70, 80},
                       {3, 9, 7, 2}};

    // for (int i = 0; i < 4; i++)
    // {
    //    printf("Enter the value of %d element of the arrar\n" , i);
    //      scanf("%d" , &marks[i]);
    // }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
       {

            //printf("The value of %d , %d element of the array is %d\n", i, j, marks[i][j]);
            printf("%d " , marks[i][j]);
        }
        printf("\n");
    }

    //  marks [0] = 34;
    // printf("marks of student 1 is %d\n" , marks[0]);
    // marks[0] = 40;
    //  marks[1] = 50;
    // marks[2] = 501;
    // marks[3] = 51;

    //  printf("marks of student 2 is %d\n" , marks[1]);
    // printf("marks of student 3 is %d\n" , marks[2]);
    // printf("marks of student 4 is %d\n" , marks[3]);
    return 0;
}
