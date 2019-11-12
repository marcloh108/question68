#include <stdio.h>
#include <stdlib.h>

int test(int array[], int size)
 {
  int i;
  for( i=0; i<size; i++)
   {
       printf("%d, ", array[i]);
   }
  printf("\n");
 }

int main(void)
    {
    int array_size;
    int array1[] = {10, 20, 30, 40};
    array_size = sizeof(array1)/sizeof(array1[0]);
    printf("Elements in original array are: ");
    test(array1, array_size);
    int result[array_size];
    for (int i = 0; i < array_size; i++)
         {
           result[i] = array1[(i + 1) % array_size];
         }
    printf("\nElements in new array are: ");
    test(result, array_size);
    }

