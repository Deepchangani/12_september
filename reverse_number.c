#include<stdio.h>
#include<conio.h>
int main()
{
    int number,rem;
    printf("enter the number ");
    scanf("%d",&number);    
    while(number!=0)
    {
    rem=number%10;  // 149     
    number=number/10; // 14/10 
    printf("%d",rem);

    }

    return 0;
    getch();
}