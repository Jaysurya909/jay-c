#include <stdio.h>




int main()
{
   char questions[][100] = {"1. Who is the Co-founder of tesla??\n",
                            "2. Who is the Main character in Aot\n",
                            "3. Who is the main character in one piece\n",
                            "4. What is the name of disease That Spread all along The World last 3 years\n",

                              };
   
    char answers[][100] = {"A.Elon musk\n, B.Mark zuckerberg\n, C.Nikola Tesla\n, D.Gautam Advani\n",
                           "A.Mikasa Ackerman\n, B.Levi Ackerman\n, C.Eren Jeager\n, D.Roronoa Zoro\n",
                           "A.Monkey.D.Luffy\n, B.Edward Newgate\n, C.Firefist Ace\n, D.Ussop\n",
                           "A.Cholera\n, B.Covid-19\n, C.Cancer\n , D.Rebiz\n"};

    int noofquestion = sizeof(questions)/sizeof(questions[0]);
    int options = sizeof(answers)/sizeof(answers[0]);



    for (int i = 0; i < noofquestion; i++)
    {
        printf("*****************\n");
        printf("%s",questions[i]);
       
       for (int j = 0; j < options; j++)
       {
        printf("%s", answers[j]);
       }
        
    }
                           



    
     return 0;
}