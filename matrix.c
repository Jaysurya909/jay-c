#include <stdio.h>
#include <conio.h>







int main()
{
   
   int m1[]={1,2,3,4};
   int m2[]={1,2,3,4};
  
   printf("Enter the numbers\n");
   //m1 input
    scanf("%d",&m1[0]); 
    getchar();   
    scanf("%d",&m1[1]);
    getchar();
    scanf("%d",&m1[2]); 
    getchar();
    scanf("%d",&m1[3]);
    getchar();
    //m2 input
    scanf("%d",&m2[0]);
    getchar();
    scanf("%d",&m2[1]);
    getchar();
    scanf("%d",&m2[2]);
    getchar();
    scanf("%d",&m2[3]);    
    getchar();
   int a=m1[0]*m2[0];
   int b=m1[1]*m2[2];
 //  int c=a+b;
   int d=m1[2]*m2[1];
   int e=m1[3]*m2[3];
  // int f=d+e;
   //int finish=c+f;
   printf("******printing the answers********\n");
    int ans[2][2]={{a, b},
                   {d, e}};
   
    for (int i = 0; i < 2; i++)
    {
        
       for (int j = 0; j < 2; j++)
       {
        printf("%d       + " , ans[i][j]);
       }
             printf("\n");
    }

     
   
   



    
     return 0;
}