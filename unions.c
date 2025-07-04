#include <stdio.h>
#include <string.h>


union student
{
     char name[34];
     int id;
     int marks;
     char fav_char;
};




int main()
{   
    union student s1;
    s1.marks = 100; 
    s1.fav_char = 'x'; 
    strcpy(s1.name,"jay");
    s1.id = 1; 

    printf("%s \n" , s1.name);
    printf("The jays id is %d" , s1.id);
    
     return 0;
} 