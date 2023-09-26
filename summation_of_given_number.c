#include<stdio.h>
#include<conio.h>
// summision of given numbers
int main()
{
    int number,sum=0;
    printf("enter the numbers ");
    scanf("%d",&number);
    int digit;
        //1562  2 =2+0      156   6   
    while(number!=0)
    {
        digit=number%10;
        sum=digit+sum;
        number=number/10;
    }
    printf("%d",sum);
   

    return 0;
    getch();
}

// congratulation buddy you did best work(program)
// me:thank you