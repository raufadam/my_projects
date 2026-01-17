/******
 *
 * REVERSING AN ARRAY WHICH SIZE WAS TAKING FROM THE USER USING A POINTER
 *
 ******/

#include <stdio.h>

#define BUFFER 5

int main(void)
{
    int *ptr, arr[BUFFER]; // an integer pointer and array 

    /*** Asking for the user input to populate the array 
     *   and a loop to populate the array
     ***/
    printf("input %d elemets -> ", BUFFER);
    for (ptr = &arr[0]; ptr < &arr[BUFFER]; ptr++) 
        scanf("%d", ptr);
    printf("\n");

    /*** Printing the array elements in reversed ***/
    printf("in reversed ->");
    for (ptr = &arr[BUFFER] - 1; ptr >= &arr[0]; ptr--)
        printf(" %d ", *ptr);

    return 0;
}
