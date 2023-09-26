#include <stdio.h>
#include <conio.h>

// summastion of first and last digit
int main()
{
    int number, sum = 0, f_digit=0, l_digit=0;
    printf("enter the number");
    scanf("%d", &number); // 4        0 1 2 3
    l_digit = number % 10;
    // 1562  Answer 3    2
    while (number > 10)
    {
        number=number/10;
    }
    f_digit=number;
    sum = f_digit + l_digit;

    printf(" sum of first and last digit is -> %d", sum);
    return 0;
    getch();
}