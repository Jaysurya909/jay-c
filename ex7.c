#include <stdio.h>
#include <string.h>

struct driver
{
    char name[34];
    int dln;
    char route[50];
    int kms;
};

int main()
{
    struct driver s1,s2,s3;
    printf("*******Enter details of the first driver*******\n");
    printf("Enter the name of the driver\n");
    scanf("%s", &s1.name);
    printf("Enter dln of the driver\n");
    scanf("%d", &s1.dln);
    printf("Enter the route of the driver\n");
    scanf("%s", s1.route);
    printf("The kms driver travelled are \n");
    scanf("%d", &s1.kms);
    printf("-----------The details of the FIrst driver---------------\n");
    printf("The name of the driver is %s\n", s1.name);
    printf("The Driving license number of the driver is %d \n", s1.dln);
    printf("The route of the driver is %s \n", s1.route);
    printf("The kms driver travelled are %d \n", s1.kms);
    printf("\n");
    printf("*******Enter details of the second driver*******\n");
    printf("Enter the name of the driver\n");
    scanf("%s", &s2.name);
    printf("Enter dln of the driver\n");
    scanf("%d", &s2.dln);
    printf("Enter the route of the driver\n");
    scanf("%s", s2.route);
    printf("The kms driver travelled are \n");
    scanf("%d", &s2.kms);
    printf("-----------The details of the Second driver---------------\n");
    printf("The name of the driver is %s\n", s2.name);
    printf("The Driving license number of the driver is %d \n", s2.dln);
    printf("The route of the driver is %s \n", s2.route);
    printf("The kms driver travelled are %d \n", s2.kms);
    printf("\n")
    printf("*******Enter details of the third driver*******\n");
    printf("Enter the name of the driver\n");
    scanf("%s", &s3.name);
    printf("Enter dln of the driver\n");
    scanf("%d", &s3.dln);
    printf("Enter the route of the driver\n");
    scanf("%s", s3.route);
    printf("The kms driver travelled are \n");
    scanf("%d", &s3.kms);
    printf("-----------The details of the Third driver---------------\n");
    printf("The name of the driver is %s\n", s3.name);
    printf("The Driving license number of the driver is %d \n", s3.dln);
    printf("The route of the driver is %s \n", s3.route);
    printf("The kms driver travelled are %d \n", s3.kms);



    return 0;
}