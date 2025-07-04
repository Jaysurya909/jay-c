#include<stdio.h>
#include<string.h>

void main()
{
  char str1[50],str2[50];
  int i;
  printf("Enter string");
  scanf("%s",&str1);
  strcpy(str2,str1);
  strrev(str2);
  i=strcmp(str1,str2);
  if (i==0)
  {
    printf("string is palindrome\n");
  }
  else
  {
    printf("string is not palindrome");
  }
    





}