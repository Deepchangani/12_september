#include<stdio.h>
#include<conio.h>
int main()
{
    int day;
    printf("enter the day");
    scanf("%d",&day);

    switch(day)
    {
        case 1:
        printf("monday");
        break;

        case 2:
        printf("Tuesday");
        break;

        case 3:
        printf("Wednesday");
        break;

        case 4:
        printf("Thursday");
        break;

        case 5:
        printf("Friday");
        break;

        case 6:
        printf("Saturday");
        break;

        case 7:
        printf("Sunday");
        break;

        default:
        printf("invalid day");
    }
return 0;
}