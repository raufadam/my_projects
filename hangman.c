/***
 *
 * The Hangman Word Guessing Game
 *
 * ***/

#include <stdio.h>
#include <stdbool.h>

#define ATTEMPTS 5  // number of attempts the user has
#define STOP 0    // break loop if attempts == SIZE (0)

int main(void)
{
    // Declared variables to be used in the program
    //
    int i, size;
    char input, attempts = ATTEMPTS;
    char word[] = {'C', 'P', 'U'};    // Initializes array to hold the characters or the word
             
    // finding the size of the array
    //
    size = sizeof(word) / sizeof(word[0]);

    printf("_ _ _\n\n");
    while (true) {
        // taking user guessed input for comparison
        //
        printf("Guess the hidden word above (CAPS only): ");
        scanf(" %c", &input);
        printf("\n");

        // tracking user attempts to end the program
        //
       attempts -= 1;
        printf("%d attempts left\n", attempts);
        if (attempts == STOP) {
            printf("Your'e out of guesses PAL! you need to start over\n");
            break;
        }

        // for loop to walk through the array 1 after the other till there's nothing else
        //
        for (i = 0; i < size - 2; i++) {
            // compare user input with the elements in the array
            //
            if (input == word[0]) {
                printf("C _ _\n");
                printf("Good guess\n");
            }else if (input == word[1]) {
                printf("CP_\n");
                printf("Good guess\n");
            }else if (input == word[2]) {
                printf("i took a lots of tries but you did it!!!\n");
                printf("[ CPU ] is the word!\n\n");
            }else 
                printf("Bad guess\n");
        }
    }

    return 0;
}
