#include <stdio.h>

/***
 *
 * Function Prototypes
 *
 * ***/
int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);

int main(void)
{
    // Variables to store user inputs to perform the operation
    //
    long num1, num2;
    char operator;

    // Instruction for the user on how to user the program
    //
    printf("FirstNumber Operator SecondNumber eg.(2 + 7)\n\n");

    // switch statement inside an infinite for loop to test user input and produce a result
    //
    for (; ;) {
        // Taking user input to perform the operation
        //
        printf("====> ");
        scanf("%ld %c %ld", &num1, &operator, &num2);
        switch (operator) {
          case '+': printf("[%ld]\n\n", (long) add(num1, num2));
                      break;
            case '-': printf("[%ld]\n\n", (long) sub(num1, num2));
                      break;
            case '*': printf("[%ld]\n\n", (long) mul(num1, num2));
                      break;
            case '/': printf("[%ld]\n\n", (long) div(num1, num2));
                      break;
            default : printf("illegal operator, try again...\n\n");
                      break;
        }
    }
}


/***
 *
 * Arithmetic Functions
 *
 * ***/

// Addtion Function
int add(int x, int y) {
    return x + y;
}

// Subtraction Function
int sub(int x, int y) {
    return x - y;
}

// Multiplication Function
int mul(int x, int y) {
    return x * y;
}

// Division Function
int div(int x, int y) {
    return x / y;
}
