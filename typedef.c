#include <stdio.h>

typedef    struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
}std;


int main()
{
    // typedef <previous_name> <alias_name>;
     std s1 , s2;
     s1.id = 5;
     s2.id = 4;
     printf("the value of s1 is %d\n" , s1.id);
     printf("the value of s2 is %d\n" , s2.id);

     return 0;
}