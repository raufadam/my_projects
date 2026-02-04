/******
 *
 *    This is a simple money transfer simulation program called "SendCash" it is
 *    used to send money from SendCash account to other money manipulation apps.
 *
 *    The program has some simple UI made entirely from some keyboard symbols ..
 *
 *******/


#include <stdio.h>

void transferOptions();

int main(void)
{
   int option;

    /*** Simple banner to display program name and some texts ***/
    printf("+------------------------------------------------------------------+\n");
    printf("| SendCash\n|\n");
    printf("|------------------------------------------------------------------|\n");
    printf("| Sending Cash to other Cash wallets | Bank Accounts\n");
    printf("+------------------------------------------------------------------+\n\n");
    
    /*** 
     * Message to tell user to select the neywork/ platform they want to send 
     * money to, this can be a mobile money accound or bank account, any accounts.
     * ***/
    while (true) {
        printf("SELECT NETWORK BELOW (select with number)\n\n");
        printf("1. MTN    2. Telecel    3. Airtel    4. Glo    5. other\n\n");
        printf("-> ");
        scanf("%d", &option);
        
        if (option == 1) {
            printf("[ MTN Transfer ]\n");
            transferOptions(); 
            break;
        }

        else if (option == 2) {
            printf("[ Telecel Transfer ]\n");
            transferOptions();
            break;
        }

        else if (option == 3) {
            printf("[ Airtel Transfer ]\n");
            transferOptions();
            break;
        }

        else if (option == 4) {
            printf("[ Glo Transfer ]\n");
            transferOptions();
            break;
        }
    }

     

    return 0;
}




/******
 *    Ouside functions used in the main program
 *******/


/*** Function operate the 3 transfer options already provided in the main function ***/
void transferOptions() {
    long accountNum, reference; 
    int confirmpin;
    double amount;
    int pin     = 1234; // The account pin for performing transactions.
    int option;

    printf("Account Number > ");
    scanf("%ld", &accountNum);
    printf("Enter Amount > ");
    scanf("%lf", &amount);
    printf("Enter Reference > ");
    scanf("%ld", &reference);
    printf("Do you want to send Cash (1/0)? ");
    scanf("%d", &option);
    
    if (option == 1) {
        printf("Confirm your pin > ");
        scanf("%d", &confirmpin);

        if (confirmpin == pin) {
            printf("\n");
            printf("%.2f sent to account number: %ld\n ", amount, accountNum);
        }else {
            printf("\n");
            printf("Incorrect pin...\n");
        }
    }else {
        printf("\n");
        printf("You're the boss...\n");
    }
    printf("+------------------------------------------------------------------+\n\n");
}



/*** Function to operate the options named 'Other'***/
