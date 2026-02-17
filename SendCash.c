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
void otheroptions();

#define STR_LEN 50

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

        else if (option == 5) {
            printf("1. Bank Transfer    2. Crypto Transfer\n");
            otheroptions();
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
    long reference; 
    char accountNum[STR_LEN]; // I'll change this once i figure things out
    int confirmpin;
    double amount;
    int pin     = 1234; // The account pin for performing transactions.
    int option;

    printf("Account Number > ");
    scanf("%s", accountNum);
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
            printf("| %.2f sent to account number: %s\n", amount, accountNum);
        }else {
            printf("\n");
            printf("| Incorrect pin...\n");
        }
    }else {
        printf("\n");
        printf("| You're the boss...\n");
    }
    printf("+-------------------------------------------------------------------+\n\n");
}



/*** Function to operate the options named 'Other'***/
void otheroptions() {
    int choice, option, crypto, confirmpin, pin = 1234;
    char name[1024]; // The rest of the 1024 bytes will be wasted if the string is less than that.
    char accountnumber[1024]; // The rest of the 1024 bytes will be wasted if the string is less than that.
    double amount;
    long reference;

    printf("> ");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Enter the name of the Bank > ");
        scanf("%s", name);
        printf("\n");
        printf("Enter account number > ");
        scanf("%s", accountnumber);
        printf("\n");
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
                printf("| %.2f sent to [ %s ] account number: %s\n", amount, name, accountnumber);
                
            }else {
                printf("\n");
                printf("| Incorrect pin...\n");
            }
        }else {
            printf("\n");
            printf("| You're the boss...\n");
        }
        printf("+-------------------------------------------------------------------+\n\n");
    }

    else if (choice == 2) {
        printf("Choose currency\n");
        printf("1. BND        [ $640.82    ]\n");
        printf("2. Bitcoin    [ $70,181.65 ]\n");
        printf("3. Ethereum   [ $2,098.81  ]\n");
        printf("4. Solana     [ $87.02     ]\n");
        printf("5. XRP        [ $1.43      ]\n");

        scanf("%d", &crypto);

        /*** Working on the first option of the crypto transfer (BNB) ***/
        if (crypto == 1) {
            printf("Enter BNB address > ");
            scanf("%s", accountnumber);
            printf("Enter amount > ");
            scanf("%lf", &amount);
            printf("Enter Reference > ");
            scanf("%ld", &reference);
            printf("Do you want to send Crypto (1/0)? ");
            scanf("%d", &option);
    
            if (option == 1) {
                printf("Confirm your pin > ");
                scanf("%d", &confirmpin);

                if (confirmpin == pin) {
                    printf("\n");
                    printf("| BNB sent successfully\n" );
                
                }else {
                    printf("\n");
                    printf("| Incorrect pin...\n");
                }
            }else {
                printf("\n");
                printf("| You're the boss...\n");
            } 
        printf("+-------------------------------------------------------------------+\n\n");
        }
        
        /*** Working on the second option of the crypto transfer (Bitcoin) ***/
        else if (crypto == 2) {
            printf("Enter Bitcoin address > ");
            scanf("%s", accountnumber);
            printf("Enter amount > ");
            scanf("%lf", &amount);
            printf("Enter Reference > ");
            scanf("%ld", &reference);
            printf("Do you want to send Crypto (1/0)? ");
            scanf("%d", &option);
    
            if (option == 1) {
                printf("Confirm your pin > ");
                scanf("%d", &confirmpin);

                if (confirmpin == pin) {
                    printf("\n");
                    printf("| Bitcoin sent successfully\n" );
                
                }else {
                    printf("\n");
                    printf("| Incorrect pin...\n");
                }
            }else {
                printf("\n");
                printf("| You're the boss...\n");
            } 
        printf("+-------------------------------------------------------------------+\n\n");
        }
        
    } 
} 
