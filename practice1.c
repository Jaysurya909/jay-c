#include <stdio.h>
#include <stdlib.h>






int main()
{  
    char Input;


    float MeterToCm = 100; 
    float KmToMeter = 1000; 
    float KmToCm = 100000; 
    float InchToCm = 2.54; 
    float First,Second; 
    


    while (1)
    {
      printf("Press q to exit\n 1.For MeterTocm\n 2.For KmToMeter\n 3.For KmToCm\n 4.For InchToCm\n");
      scanf("%c" , &Input);
      getchar();
      
      switch (Input)
      {
      case 'q':
        printf("Qutting The Programm . . . .\n");
        goto end;
        break;
       
      case '1':
        printf("Enter The no you want to convert\n");
        scanf("%f",&First);
        Second= First * MeterToCm;
        printf("%f Meters To Cm is %f \n",First,Second);
        break;   
      
      case '2':
        printf("Enter The no you want to convert\n"); 
        scanf("%f" , &First);
        Second = First * KmToMeter; 
        printf("%f Km To meter is %f \n");     
        break;

      case '3':
        printf("Enter the no you wanna convert\n");
        scanf("%f" , &First);
        Second = First * KmToCm;
        printf("%f Km to Cm is %f \n");
        break;
            
      case '4':
        printf("Enter the no you wanna convert \n");
        scanf("%f",&First);
        Second = First * InchToCm;
        printf("%f inch TO Cm is %f\n");
        break;       


      
      default:
      printf("Enter Valid choice \n");
        break;
      }   



    }
    
     end:


     return 0;
}