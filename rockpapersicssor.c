#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generaterandomnumber(int n){
    srand(time(NULL));
    return rand()%n;
}

int greater(char char1 , char char2)
{
if (char1 == char2)
{
    return -1;
}
    
if ((char1 == 'r') && (char2 == 's'))
{
   return 1;
}
else if ((char2 == 'r') && (char1 == 's'))
{
    return 0;
}

if ((char1== 'p') && (char2== 'r'))
{
    return 1;
}
else if ((char2== 'p') && (char1== 'r'))
{
    return 0;
}

if ((char1 == 's') && (char2 == 'p'))
{
    return 1;
}
else if ((char2 == 's') && (char1 == 'p'))
{

return 0;  
}

  

}


void main()
{ 

int playerscore = 0, compScore = 0, temp;
char playerChar , compChar;
char dict []= {'r' , 'p' , 's'};  
printf("Welcome to rock, paper, scissor. \n");
for (int i = 0; i < 3; i++)
{

// take players input
printf("Player 1 turn \n");
printf("Choose 1 for rock , 2 for Paper and 3 for Scissors\n ");
scanf("%d" , &temp);
getchar();
playerChar = dict[temp - 1];

// take computers input
printf("computers Turn: \n");
printf("Choose 1 for rock , 2 for Paper and 3 for Scissors\n");
temp = generaterandomnumber(3) +1;
compChar = dict[temp - 1];
printf("Computer chose %c\n" , compChar);

if (greater(compChar , playerChar) ==1)
{
    compScore += 1;
    printf("Cpu got it! \n\n");
}
else if (greater(compChar , playerChar)== -1)
{
    compScore +=1;
    playerscore += 1;
    printf("Its a draw\n\n");
}
else
{
    playerscore += 1;
    printf("You got it!!\n\n");
}


}
printf("Your points are %d\n" , playerscore);
printf("Computers points are %d\n" , compScore);

if (playerscore > compScore)
{
    printf("*******************You won the session***********************\n");
    printf("You won it by %d points", playerscore - compScore);
}
if (compScore > playerscore)
{
    printf("**********************Computer won the session**************************\n");
    printf("Computer won it by %d points" , compScore - playerscore);
}










}