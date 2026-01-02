/***
 *
 * Simulating a money transfer system
 * OPERATONS
 * 1. Transfer
 * 2. Withdraw
 * 3. Deposite
 * 4. Balance
 *
***/

#include <stdio.h>
#include <stdbool.h>

// macros to represent the various operations
//
#define TRANSFER 1
#define WITHDRAW 2
#define DEPOSIT 3
#define BALANCE 4

int main(void)
{
    /* 
     * i need a float/double variable to store the balance in the user account and a long
     * variable to store the value of the user inputs.
     */
     
    float amount, balance = 0.00f;
    int option;
    
    // Operations option for the user to choose from
    //
    printf("\n"); // leave a new line in the terminal before the main program
    
    // A design to ne displayed on top of the program to add some weird beauty LOL.
    //
    printf("============================================================================\n");

    // operation to choose by the user
    //
    printf("[1]=Transfer [2]=Withdraw [3]=Deposite [4]=Balance\n\n");
    // an infinite loop to repeatedly run the program until the user terminate's it
    //
    while (true) {
        /* 
         * asking for the user input either to transfer money, withdraw money, deposit
         * money or check their blance.
         */
    
        printf("What's on your mind? ");
        scanf("%d", &option);

	// conditional statement to check user option and perform the operation for that
	// option.
	//
	if (option == TRANSFER) {
            // working on option 1 which is the TRANSFER option
	    //
            printf("Amount to transfer: GHC ");
	    scanf("%f", &amount);

	    // Condition for if the balance is < the amount to transfer
	    //
	    if (balance < amount) {
                printf("Insuficient balance\n\n");
	    }else {
	        balance -= amount;
                printf("GHC %.3f Transfer Successful.\n\n", amount);
	    }

	}else if (option == WITHDRAW) {
            // working on option 2 which is the WITHDRAW option
	    //
	    printf("Amount to withdraw: GHC ");
	    scanf("%f", &amount);

	    // Condition for if the balance is < the amount to withdraw
	    //
	    if (balance < amount) {
                printf("Insuficient balance\n\n");
	    } else {
	        balance -= amount;
	        printf("GHC %.3f Withdrawal Successful.\n\n", amount);
	    }

	}else if (option == DEPOSIT) {
            // working on option 3 which is the DEPOSIT option
	    //
	    printf("Amount to deposit: GHC ");
	    scanf("%f", &amount);
	    balance += amount;
	    printf("GHC %.3f Deposited Successful.\n\n", amount);

	}else if (option == BALANCE) {
	    /* 
	     * working on the BALANCE option, when the user choose this option, the 
	     * program prints the account balance and end the program.
	     */

            printf("Account Balance GHC %.3f\n\n", balance);
	    break;
	}
    }
    
    return 0;
}
