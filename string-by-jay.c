#include <stdio.h>
#include <string.h>









void main()
{  
   char s1[]="noob";
   char s2[]="jay";
   char s3[100];

printf("%s",s1);
printf("The strcmp for s1 and s2 returned %d \n",strcmp(s1,s2));
printf("The length of s1 is %d \n",strlen(s1));
// puts(strcat(s1,s2)); adds s1 & s2
printf("the lenght of s1 is now %d \n",strlen(s1));
puts(s1);
strcpy(s3,strcat(s1,s2));
puts(s3);
printf("The reversed string of s1 is : ");
puts(strrev(s1));
}