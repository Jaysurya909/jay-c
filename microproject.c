#include<stdio.h>
#include<conio.h>





struct Student
{
    int long sroll;
    char name[20];
    int marks[5];
};



int main()
{  
  
   int seatn;
   struct Student s;
   int total=0,i;
   float avg;
   int clang,chem,maths,eng,phy;
   printf("Enter enrollment no\n");
   scanf("%ld",&s.sroll);
   printf("Enter seat no\n");
   scanf("%d",&seatn); 
   printf("Enter name\n");
   scanf("%s",&s.name); 
   printf("Enter marks\n");
   for (i = 0; i < 5; i++)
   {
     scanf("%d",&s.marks[i]);
     total=total+s.marks[i];
     
   }
   avg=(float)total/5;
   clang=s.marks[0];
   chem=s.marks[1];
   maths=s.marks[2];
   eng=s.marks[3];
   phy=s.marks[4]; 

   printf("********************Printing result********************\n");
   printf("Winter 2022\n\n");
   printf("SEMESTER: First semister\n\n");
   printf("Course: Electronics and Telecommunication\n\n");
   printf("Seat no: %d\n\n",seatn);
   printf("EnRollment no: %ld\n",s.sroll);
   printf("Name: %s\n",s.name);
   printf("Subject     Marks\n");
   printf("Clang       %d\n",clang);
   printf("chemistry   %d\n",chem);
   printf("Maths       %d\n",maths);
   printf("English     %d\n",eng);
   printf("Physics     %d\n",phy); 
   printf("Total marks: %d\n",total);
   printf("Average: %f\n",avg); 
   printf("Grade: ");
   if (avg>=75)
   {
    printf("First class distinction\n");
   }
   else if ((avg<75)&&(avg>=65))
   {
    printf("First class con\n");
   }
   else if ((avg<65)&&(avg>=45))
   {
    printf("Second class\n");
   }
   else if ((avg<45)&&(avg>=35))
   {
     printf("Third class\n");
   }
   else
   {
    printf("Fail");
   }
   
    return 0;
}


