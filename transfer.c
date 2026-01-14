/***
 *********************
 * ABOUT THE PROJECT *
 *********************
 * Simulating a banking or money manipulation system, which includes, transfer money,
 * withdraw money, deposite money, and checking available balance.
 *
 **********************
 * NEW FEATURES INTEL *
 **********************
 * 1. I'm going to add a new feature in this program, the feature is that,
 *    when a user want's to peform a transaction, they'll have to enter their 
 *    secret pin before the transaction can be completed.
 *
 ***************
 * DEBUG INTEL *
 ***************
 * 1. I changed the amount and deposite varable types from float to double
 * 2. I've added a long bar like the one that shows up when the program 
 *    starts at the bottom when the program breaks.
 * 3. I've deleted some commented codes that needed to be deleted to prevent
 *    confusion to the reader.
 *
***/

#include <stdio.h>
#include <stdbool.h>

/* Macros to represent the various operations */
#define TRANSFER 1
#define WITHDRAW 2
#define DEPOSIT  3
#define BALANCE  4

int main(void)
{
    /* 
     * I need a float/double variable to store the amount and balance and an int variable to 
     * store the value of the user inputs and the secrete pin.
     */
     
    double amount, balance;
    int option, auth, pin;

    balance = 0.00;
    pin     = 1234;
    
    printf("\n"); // leave a new line in the terminal before the main program begins
    
    /* A design to ne displayed on top of the program to add some weird beauty LOL. */
    printf("============================================================================\n");

    /* operation to choose by the user */
    printf("[1]=Transfer [2]=Withdraw [3]=Deposite [4]=Balance\n\n");
    /* An infinite loop to repeatedly run the program until the user terminates it */
    while (true) {
        /* 
         * Asking for the user input either to transfer money, withdraw money, deposit
         * money or check their blance.
         */
    
        printf("What's on your mind? ");
        scanf("%d", &option);

	/* Conditional statement to check user option and perform the operation for that
	   option. */
	if (option == TRANSFER) {
       /* Working on option 1 which is the TRANSFER option */
      printf("Amount to transfer: GHC ");
	    scanf("%lf", &amount);

      /* Block to authenticate the operation on the transfer option */
      printf("Enter pin to continue: ");
      scanf("%d", &auth);

      /* Condition to decide either to authenticate user or not */
      if (auth == pin) {
          /* Condition to check if the balance is < the amount to transfer */
          if (balance < amount) {
              printf("Insuficient balance\n\n");

          }else  {
              balance -= amount;
              printf("GHC %.2f Transfer Successful\n\n", amount);
          }
      }else {
          printf("Wrong pin!\n");
          printf("...\n\n");
      }

	}else if (option == WITHDRAW) {
      /* Working on option 2 which is the WITHDRAW option */
	    printf("Amount to withdraw: GHC ");
	    scanf("%lf", &amount);

      /* Block to authenticate the operation on the withdraw option */
      printf("Enter pin to continue: ");
      scanf("%d", &auth);

      /* Condition to decide either to authenticate user or not */
      if (auth == pin) {
          /* Condition to check if the balance is < the amount to withdraw */
          if (balance < amount) {
              printf("Insuficient balance\n\n");

          }else  {
              balance -= amount;
              printf("GHC %.2f Withdraw Successful\n\n", amount);
          }
      }else {
          printf("Wrong pin!\n");
          printf("...\n\n");
      }

	}else if (option == DEPOSIT) {
      /* Working on option 3 which is the DEPOSIT option */
	    printf("Amount to deposit: GHC ");
	    scanf("%lf", &amount);
	    balance += amount;
	    printf("GHC %.2f Deposited Successful.\n\n", amount);

	}else if (option == BALANCE) {
	    /* 
	     * Working on the BALANCE option, when the user choose this option, the 
	     * program prints the account balance and end the program.
	     */

      /* Block to authenticate the operation on the transfer option */
      printf("Enter pin to continue: ");
      scanf("%d", &auth);

      /* Condition to decide either to authenticate user or not */
      if (auth == pin) {
          printf("Account Balance GHC %.2f\n\n", balance);
          printf("============================================================================\n");
	        break;
      }else {
          printf("Wrong pin!\n");
          printf("...\n\n");
      }


	}

    }
    
    
    return 0;
}

