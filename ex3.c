#include <stdio.h>
#include <stdlib.h>

int main()
{
  char input;

  float kmstoMiles = 0.621371;
  float inchesToFoot = 0.621371;
  float cmsToInches = 0.621371;
  float poundToKgs = 0.621371;
  float inchesToMeters = 0.621371;
  float first, second;

  while (1)
  {
    printf("Enter the input character.  q to quit\n        1. kms to miles\n       2. inches to foot\n     3. cms to inches\n     4. pound to kgs\n         5. inches to meters\n  ");

    scanf("%c", &input);

    switch (input)
    {
    case 'q':
      printf("Qutting the program.  . .");
      goto end;
      break;

    case '1':
      printf("Enter qunatity in terms of first unit\n");
      scanf("%f", &first);
      second = first * kmstoMiles;
      printf("%f Kms  is equal to %f Miles  \n ", first, second);
      break;

    case '2':
      printf("Enter qunatity in terms of first unit\n");
      scanf("%f", &first);
      second = first * inchesToFoot;
      printf("%f Inches  is equal to  %f Foot  \n ", first, second);
      break;

    case '3':
      printf("Enter qunatity in terms of first unit\n");
      scanf("%f", &first);
      second = first * cmsToInches;
      printf("%f Cms  is equal to %f Inches  \n ", first, second);
      break;

    case '4':
      printf("Enter qunatity in terms of first unit\n");
      scanf("%f", &first);
      second = first * poundToKgs;
      printf("%f  Pounds is equal to   %f  Kgs \n ", first, second);
      break;

    case '5':
      printf("Enter qunatity in terms of first unit\n");
      scanf("%f", &first);
      second = first * inchesToMeters;
      printf("%f Inches  is equal to %f  Metres \n ", first, second);
      break;

    default:
      break;
    }
  }
end:

  return 0;
}
