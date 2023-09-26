#include <stdio.h>
#include <conio.h>
// int main()
// {
//     // days into year
//     int days,year;
//     printf("enter the days \n");
//     scanf("%d",&days);
//     year=days/365;
//     printf(" \nnumber of year is :->%d",year);
//     return 0;
//     getch();
// }

// convert year into days

#include <stdio.h>
#include <conio.h>
int main()
{
    int days, year;
    printf("enter the year \n");
    scanf("%d", &year);
    days = year * 365;
    
        printf("The number of days are :-> %d", days);

    return 0;
    getch();
}
