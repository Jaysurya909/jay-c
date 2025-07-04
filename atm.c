#include <stdio.h>
#include <stdlib.h>
#include <time.h>





int random(int n)
{
   srand(time(NULL));
   return rand()%n;
}






void main()
{
int input;    
int money1; 
int money2;
int pin= 3456;
int epin;
int balance;
int newpin;
int checker;
int bankbalance;
printf("*****Welcome to konoha state bank*******\n\n");

for (int i = 0; i < 1000; i++)
{
restart:    
printf("Enter your pin please\n");
scanf("%d",&epin);
if (epin == pin)
{
   goto start;
}
else
{
    printf("You have entered wrong pin\n");
    goto restart;
}    

start:    
printf("Select what you want to do\n\n");
printf("1.Deposite money\n2.Withdraw money\n3.Change your pin\n4.check balance\n0.To exit\n");   
scanf("%d",&input);
switch (input)
{
case 1:
    printf("Enter how much money you want to Deposit\n");
    scanf("%d",&money1);
    printf("***You have deposited %d rupees***\n\n\n",money1);
    break;

case 2:
    printf("Enter how much money you want to Withdraw\n");
    scanf("%d",&money2);
    printf("***You have withdrawn %d rupees***\n\n\n",money2);
    break;

case 3:
    reenter:
    printf("Enter your old pin please\n");
    scanf("%d",&checker);
    if (checker == pin)
    {
        printf("Enter your new pin\n");
        scanf("%d",&newpin);
    }
    else
    {
        printf("You have enterd wrong pin\n");
        goto reenter;
    }
    printf("***Your new pin is %d***\n\n\n",newpin);    
    break;

case 4:
    bankbalance = random(100000);
    printf("Your current bank balnce is %d\n\n\n",bankbalance);
    break;

case 0:
    goto end; 
default:
    printf("invalid choice\n\n\n"); 
    break;
}
}

end:

    printf("---Thank you for visting---");
     
}