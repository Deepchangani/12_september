
#include <stdio.h>
#include <string.h>
int withdraw(int balance);
int deposit(int balance);
void account_balance(int balance);
int main()
{
    char name[20];
    int balance, account, choice, price, amount;
    char permission[1];
    printf("enter your name ");
    scanf("%c",name);
    printf("\n --- Your name is => %s", name);
    printf("\nwhich is  account do you used ? \n\nplease choose any following number for your account\n");
    printf("\nPress 1 for saving account and 2 for current account\n\n");
    scanf("%d", &account);
    if (1 == account)
    {
        printf("your account type is saving account\n");
    }
    else if (2 == account)
    {
        printf("your account type is current account");
    }
    else
    {
        printf("choose correct number !!!!!");
    }
    printf("enter balance in your account ");
    scanf("%d", &balance);

    printf("\n");
    printf("  Press 1 for withdraw the amount \n");
    printf("  press 2 for deposit the amount\n");
    printf("  press 3 for exit \n");
    scanf("%d", &choice);

    if      (1 == choice)
    {
        withdraw(balance);
    }
    else if (2 == choice)
    {   
        deposit(balance);
    }
    else
    {
        account_balance(balance);
    }

    return 0;
}
void account_balance(int balance)
{
    printf("your account has %d rupees ", balance);
}
int withdraw(int balance)
{
    int withdrawl;
    int Total_balance;
    printf("enter the amount which you want to withdraw ");
    scanf("%d", &withdrawl);
    Total_balance = balance - withdrawl;
    printf("total balance is %d ", Total_balance);
    return Total_balance;
}
int deposit(int balance)
{
    int Total_balance;
    int deposit;
    printf("enter the amount which you want to deposit ");
    scanf("%d", &deposit);
    Total_balance = balance + deposit;
    printf("total balance is %d ", Total_balance);
    return Total_balance;
}