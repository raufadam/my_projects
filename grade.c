/***
 *
 * PLEASE READ THIS BEFORE YOU INSULT ME
 *  
 * To whom ever reading this program i'm sorry.
 * i know there's a better way to write it but
 * i'm a bit new to C programming so, i could
 * only think of this way, plus i saw this kind
 * os switch statement in the book i'm currently 
 * learning (C Programming Modern approach by K.N King) 
 * so i thought i should apply it here
 * and look, it worked, somehow, i'll do better next time.
 *
 * Thanks for understanding.
 *
 * ***/

#include <stdio.h>

int main(void)
{
    // declared variable to store grade, input by the user
    //
    int grade;

    // asking and taking user input (grade)
    //
    printf("Input numerical grade: ");
    scanf("%d", &grade);

    // switch statement to make compare numerical grades to letter grades
    //
    switch (grade) {
        case 90: case 91: case 92: case 93: case 94: case 95: case 96: case 97: case 98:         case 99: case 100:
          printf("A");
          break;
        case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88:         case 89: 
          printf("B");
          break;
        case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78:         case 79:
          printf("C");
          break;
        case 60: case 61: case 62: case 63: case 64: case 65: case 66: case 67: case 68:         case 69:
          printf("D");
          break;
        case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58:         case 59:
          printf("F");
          break;
        default:
          printf("Illegal grade.");
          break;

    }

    //return to OS
    //
    return 0;
}
