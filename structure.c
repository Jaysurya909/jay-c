#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} harry, ravi, shubham;

int main()
{
    harry.id = 1;
    ravi.id = 2;
    shubham.id = 3;
    harry.marks = 50;
    ravi.marks = 100;
    shubham.marks = 150;
    harry.fav_char = 'p';
    ravi.fav_char = 'i';
    shubham.fav_char = 'f';

    strcpy(harry.name, "Harry potter");
    strcpy(shubham.name, "Shubham choudhary");
    strcpy(ravi.name, "Ravi roy");

    printf("%s \n", harry.name);
    printf("%s \n", ravi.name);
    printf("%s \n", shubham.name);
    printf("harrys id is %d\n", harry.id);
    printf("ravis id is %d\n", ravi.id);
    printf("shubhams id is %d\n", shubham.id);
    printf("harry got %d marks\n", harry.marks);
    printf("ravi got %d marks\n", ravi.marks);
    printf("shubham got %d marks\n", shubham.marks);
    printf("harrys fav char is %c\n" , harry.fav_char);
    printf("ravis fav char is %c\n" , ravi.fav_char);
    printf("shubhams fav char is %c\n" , shubham.fav_char);

    return 0;
}