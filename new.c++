#include<stdio.h>
#include<string.h>
//strcat
// char strcat(char *str1,char *str2)


int main()
{
    char s1[50]="Hello";
    char s2[50]="world";
    strcat(s1,s2);
    printf("The output is %s",s1);
    return 0;
}


//strcmp
// int strcmp(const char *str1,const char *str2)\

int main()
{
    char s1[20]= "beginners book";
    char s2[20]= "Beginners book.com";

    if(strcmp(s1,s2)==0)
    {
        printf("string 1 and 2 is equal");

    }
    else
    {
        printf("The string 1 and 2 are different");
        
    }
    return 0;
}
