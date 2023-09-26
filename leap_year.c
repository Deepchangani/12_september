#include <stdio.h>
#include <conio.h>
int main()
{
    int year;
    printf("enter the year \n");
    scanf("%d", &year);
    if (year % 400 == 0)
    {
        printf("its leap year");
    }
    else if (year % 100 == 0)
    {
        printf("it is not a leap year");
    }
    else if (year % 4 == 0)
    {
        printf("its leap year");
    }
    else
    {
        printf("it is not leap year");
    }
    return 0;
    getch();
}