#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void formateDesign(char name[50] , char date[40])
{
  printf("\n\n");
  printf("\t    Greate Obserber Restaurent");
  printf("\n\t----------------------------------");
  printf("\nDate: %s",date);
  printf("\nInvoice To: %s",name);
  printf("\n");
  printf("\n--------------------------------------------------------\n");
  printf("Items\t\t\t");
  printf("Qty\t\t\t");
  printf("Total\t\t\t");
  printf("\n--------------------------------------------------------");
  printf("\n\n");
}

void printbill(char item[20],int qty,float price)
{
    printf("%s\t\t",item);
    printf("\t%d\t\t",qty);
    printf("\t%0.2f\t\t",qty*price);
    printf("\n\n");

}

void generatebill(float total)
{
    printf("\n");
    float discount = 0.1 * total;
    float netTotal = total - discount;
    printf("--------------------------------------------------------\n");
    printf("Discount offer 10%:\t\t %0.2f:",total-netTotal);
    printf("\n-------------------------------------------------------\n");
    printf("Total Amount:\t\t\t %0.2f",netTotal);
    printf("\n\n");
}

struct resturent
{
    char name[40];
    char item[50];
    int noOfItem;
    int uintchargeofitem;
    int qty;
    float price;
};


int main()
{
   float total;
   int m;
   struct resturent r1[40];
   printf("\n\t\tWelcome To The ********** Great Obserber Restaurent Club*********\n");
   printf("\t\t\t--------------------------------------------------\n");
   printf("\nEnter the Customer Name:");
   scanf("%s",&r1->name);
   printf("\nEnter the number of order as request of customer:");
   scanf("%d",&m);

   for (int i = 0; i < m; i++)
   {
     printf("\nEnter %d item: \t",i+1);
     scanf("%s",r1[i].item);
     printf("Enter Quantity of Item:\t");
     scanf("%d",&r1[i].noOfItem);
     printf("Enter the per unit charge of item:\t");
     scanf("%d",&r1[i].uintchargeofitem);
     total += r1[i].noOfItem * r1[i].uintchargeofitem;
   }
   formateDesign(r1->name,"19/10/2022");
   for (int i = 0; i<r1->noOfItem; i++)
   {
      printbill(r1[i].item , r1[i].noOfItem , r1[i].uintchargeofitem);
   }
   generatebill(total);
   printf("\n\n");




   return 0;
}





