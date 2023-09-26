#include <stdio.h>
void addition(int a,int b)
{
    printf("Addition = %d", a + b);
}
void substraction(int a,int b)
{
    printf("substraction = %d", a - b);
}
void multiplication(int a,int b)
{
    printf("Multiplication = %d", a * b);
}
void divison(int a,int b)
{
    printf("Division = %d", a / b);
}
int main()
{
    int a, b, option;

    printf("\n1. Addition");
    printf("\n2. substraction");
    printf("\n3. multiplication");
    printf("\n4. Division\n");
    printf("\n");
    printf("\nEnter your choice:");
    scanf("%d", &option);
    printf("\n");

    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter second number:");
    scanf("%d", &b);


    switch (option)
    {
    case 1:
        addition(a,b);
        break;

    case 2:
        substraction(a,b);
        break;

    case 3:
        multiplication(a,b);
        break;

    case 4:
        divison(a,b);
        break;

    default:
        printf("Invalid choice");
    }
}