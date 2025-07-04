#include <stdio.h>

int main()
{
    int Order;
    printf("*************************** Welcome to the Konoha Restaurent ****************************\n"); 
    printf("******* Please See our Menu ***********\n"); 

   char maincourse[][100]={"1.Naruto_Ramen = $500","2.Luffys_meat_on_bone = $1000","3.Dahi-puri = $150","4.Gobi_Manchurian = $400",
                           "5.Chinese_Bhel = $300"};  

   int Naruto_ramen=500,
       Luffys_meat_on_bone=1000,
       Dahi_puri=150,
       Gobi_manchurian=400,
       Chinese_bhel=300;

     int print = sizeof(maincourse)/sizeof(maincourse[0]); 

     for (int i = 0; i < print; i++)
      {
         printf("\n");
         printf("%s",maincourse[i]);
      }

    printf("\n\n");
    int orders;
    printf("Enter how many orders you are going to make\n");    
    scanf("%d",&orders);
    printf("***** Now Please Select the orders******\n");
    int i=0;
    // int total[]={0,0,0,0,0};

    while (i<orders)
    {

      scanf("%d",&Order);
         
    switch (Order)
    {
    case 1:
        printf("You have ordered Naruto ramen\n");
        printf("Its Price is $%d",Naruto_ramen);
        // total[0]=Naruto_ramen;
        break;
    case 2:
        printf("You have ordered Luffys Meat on bone\n");
        printf("Its Price is $%d",Luffys_meat_on_bone);
        // total[0]=Luffys_meat_on_bone;
        break;
    case 3:
        printf("You have oredred Dahi puri\n");
        printf("Its Price is $%d",Dahi_puri);
        // total[0]=Dahi_puri;
        break;
    case 4:
        printf("You have orederd Gobi Manchurian\n");
        printf("Its Price is $%d",Gobi_manchurian);
        // total[0]=Gobi_manchurian;
        break;
    case 5:
        printf("You have oredered Chinese Bhel\n"); 
        printf("Its Price is $%d",Chinese_bhel);
        // total[0]=Chinese_bhel;
        break;      
    default:
        printf("Enter valid choice\n");     
        break;
    }
    printf("\n");
    i=i+1;
    
    
    }
       
     
   
   
   
// printf("[*******Your Total of this order is $%d**********]",total[0]+total[1]+total[2]+total[3]+total[4]);




     return 0;
}












