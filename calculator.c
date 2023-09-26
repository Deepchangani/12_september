#include <stdio.h>
#include <conio.h>
void addition(int a, int b)
{
    printf("Addition = %d", a + b);
}
void divison(int a, int b)
{
    printf("Division = %d", a / b);
}
void multiplication(int a, int b)
{
    printf("Multiplication = %d", a * b);
}
void substraction(int a, int b)
{
    printf("substraction = %d", a - b);
}
int main()
{
    int a, b, choice;

    printf("\nEnter your choice:");
    scanf("%d", &choice);
    printf("\n");

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("\n Press 1 for Addition");
    printf("\n Press 2 for substraction");
    printf("\nPress 3 for multiplication");
    printf("\nPress 4 for Division\n");
    printf("\n");

    switch (choice)
    {
    case 1:
        addition(a, b);
        break;

    case 2:
        substraction(a, b);
        break;

    case 3:
        multiplication(a, b);
        break;

    case 4:
        divison(a, b);
        break;

    default:
        printf("Invalid choice");
    }
    getch();
    return 0;
}