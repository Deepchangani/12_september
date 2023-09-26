#include<stdio.h>
#include<conio.h>
int main()
{
    int number;
    printf("enter the number \n");
    scanf("%d",&number);
    int ans=(number%2==0)?printf("even"):printf("Odd");
    getch();
    return 0;
}