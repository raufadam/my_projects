/***
 *
 * A simple Rock-Paper-Scissors game
 *
 * ***/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define NUMBER 2
#define R 0
#define P 1
#define S 2

int main(void)
{
    // declared variables for the program
   //
   int userChoice, random, i, N = NUMBER;

    // using srand() function to seed the random number generation with the system time
   //
   srand(time(NULL));

   // message for the user playing the game
   //
   printf("Rock-Paper-Scissors instructions below\n[ 0=Rock, 1=Paper, 2=Scissors ]\n\n");

   while (true) {
        // taking user input
       //
       printf("[User: ");
       scanf("%d", &userChoice);

        // looping throught the random numbers, printing randon number once
       //
       for (i = 0; i < 1; i++) {
            // generating random number between 0 and NUMBER using the rand() function
           //
           random = rand() % (N + 1);

           // conditional statement to compare user choice with the computer choice
           //
           if (userChoice == R  && random == S) {
               printf("[Computer: %d\n", random);
               printf("====> You Won\n\n");
           }else if (userChoice == S && random == P) {
               printf("[Computer: %d\n", random);
               printf("====> You won\n\n");
           }else if (userChoice == P && random == R) {
               printf("[Computer: %d\n", random);
               printf("====> You won\n\n");
           }else if (random == R && userChoice == S) {
               printf("[Computer: %d\n", random);
               printf("====> You lost\n\n");
           }else if (random == S && userChoice == P) {
               printf("[Computer: %d\n", random);
               printf("====> You lost\n\n");
           }else if (random == P && userChoice == R) {
               printf("[Computer: %d\n", random);
               printf("====> You lost\n\n");
           }else if (userChoice == random) {
               printf("[Computer: %d\n", random);
               printf("====> Draw\n\n");
           }else 
               printf("Invalid Choice choose between [ 0=Rock, 1=Paper, 2=Scissors ]\n\n");
       }
   }

    return 0;
}
