/***
 *
 * Array Sorting Program (Bubble Sort)
 *
 * ***/

#include <stdio.h>

#define BUFF 7

int main(void)
{
    int i, j, swap;
    int arr[BUFF] = {7, 1, 4, 6, 3, 5, 2};

    // Loop to check pases and swap numbers
    //
    for (i = 0; i < BUFF - 1; i++)
    {
        for (j = 0; j < BUFF - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap;
            }
        }
   }  

    printf("Unsorted = {7, 1, 4, 6, 3, 5, 2}\n\n");
    printf("Sorted = ");
    printf("{%d, ", arr[0]);
    printf("%d, ", arr[1]);
    printf("%d, ", arr[2]);
    printf("%d, ", arr[3]);
    printf("%d, ", arr[4]);
    printf("%d, ", arr[5]);
    printf("%d}", arr[6]);
    printf("\n");

    return 0;
}
