#include <stdio.h>
#include <string.h>

void arrayRev(int array[], int length)
{

  for (int i = length - 1; i >= 0; i--)
  {
    printf("%d", array[i]);
  }
  }

int main()
{

  int array[] = {1, 2, 3, 4, 5, 6, 7};
  int length = 7;

  arrayRev(array, length);

  return 0;
}
