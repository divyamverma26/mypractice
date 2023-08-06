#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define max_acc 100

struct account
{
    int account_number;
    float balance;
    char name[50];
};
struct account accounts[max_acc];

struct login
{
    char username[50];
    char password[50];
} current_login;

int num_accounts = 0;

int login()
{
    char username[50];
    char *password;
    int num_tries = 0;
    while (num_tries < 3)
    {
        printf("\n");
        printf("Enter your username: ");
        scanf("%s", username);
        password = getpass("Enter your password: ");
        if (strcmp(username, "admin") == 0 && strcmp(password, "password") == 0)
        {
            printf("\nLogin successful.\n");
            return 1;
        }
        else
        {
            printf("\nError: Incorrect username or password.\n");
            num_tries++;
            printf("You have %d tries left.\n\n", 3 - num_tries);
        }
    }
    printf("Error: Maximum number of tries reached.\n\n");
    exit(0);
}

void add_account()
{
    printf("\n");
    if (num_accounts == max_acc)
    {
        printf("Error: Maximum number of accounts reached.\n\n");
        return;
    }

    int account_number;
    printf("Enter the account number: ");
    scanf("%d", &account_number);

    for (int i = 0; i < num_accounts; i++)
    {
        if (accounts[i].account_number == account_number)
        {
            printf("Error: Account number already exists.\n\n");
            return;
        }
    }

    printf("Enter your name: ");
    scanf(" %[^\n]", accounts[num_accounts].name);
    accounts[num_accounts].account_number = account_number;
    accounts[num_accounts].balance = 0;
    num_accounts++;
    printf("Account created successfully.\n\n");
}

void deposit()
{
    printf("\n");
    int account_number;
    float amount;
    printf("Enter the account number: ");
    scanf("%d", &account_number);
    int account_found = 0;
    for (int i = 0; i < num_accounts; i++)
    {
        if (accounts[i].account_number == account_number)
        {
            printf("\nEnter the amount to deposit: ");
            scanf("%f", &amount);
            accounts[i].balance += amount;
            printf("Deposit successful. Balance: %.2f\n\n", accounts[i].balance);
            account_found = 1;
            break;
        }
    }
    if (!account_found)
    {
        printf("Error: Account not found.\n\n");
    }
}

void withdraw()
{
    printf("\n");
    int account_number;
    float amount;
    printf("Enter the account number: ");
    scanf("%d", &account_number);
    int account_found = 0;
    for (int i = 0; i < num_accounts; i++)
    {
        if (accounts[i].account_number == account_number)
        {
            printf("\nEnter the amount to withdraw: ");
            scanf("%f", &amount);
            if (accounts[i].balance >= amount)
            {
                accounts[i].balance -= amount;
                printf("Withdrawal successful. Balance: %.2f\n\n", accounts[i].balance);
            }
            else
            {
                printf("Error: Insufficient balance.\n");
            }
            account_found = 1;
            break;
        }
    }
    if (!account_found)
    {
        printf("Error: Account not found.\n\n");
    }
}

void balance_inquiry()
{
    printf("\n");
    int account_number;
    printf("Enter the account number: ");
    scanf("%d", &account_number);
    int account_found = 0;
    for (int i = 0; i < num_accounts; i++)
    {
        if (accounts[i].account_number == account_number)
        {
            printf("\nBalance: %.2f\n\n", accounts[i].balance);
            account_found = 1;
            break;
        }
    }
    if (!account_found)
    {
        printf("Error: Account not found.\n");
    }
}

void show_details()
{
    printf("\n");
    int account_number;
    printf("Enter account number: ");
    scanf("%d", &account_number);
    int account_found = 0;
    for (int i = 0; i < num_accounts; i++)
    {
        if (accounts[i].account_number == account_number)
        {
            printf("\nName: %s\n", accounts[i].name);
            printf("Account number: %d\n", accounts[i].account_number);
            printf("Balance: %.2f\n\n", accounts[i].balance);
            account_found = 1;
        }
        if (!account_found)
        {
            printf("Account not found.");
        }
    }
}

int main()
{
    printf("\n");
    printf("Hi, Welcome to online banking System.\n");
    int choice, ch1;
    int logged_in = 0;
    printf("1. To login.\n");
    printf("2. To exit.\n");
    scanf("%d", &ch1);
    if (ch1 == 1)
    {
        do
        {
            if (!logged_in)
            {
                logged_in = login();
                if (!logged_in)
                {
                    continue;
                }
            }
            printf("\n");
            printf("Choose an option:\n");
            printf("1. Add account\n");
            printf("2. Deposit\n");
            printf("3. Withdraw\n");
            printf("4. Balance inquiry\n");
            printf("5. Show account details\n");
            printf("6. Quit\n");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                add_account();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                balance_inquiry();
                break;
            case 5:
                show_details();
                break;
            case 6:
                printf("\n");
                printf("Thank you for banking with us.\n\n");
                break;
            default:
                printf("Invalid choice.\n");
            }
        } while (choice != 6);
    }
    else if (ch1 == 2)
    {
        printf("\n");
        printf("Thank you for banking with us.\n\n");
    }
    else
    {
        printf("Enter a valid input.");
    }

    return 0;
}
