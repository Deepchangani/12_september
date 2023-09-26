// fibonacci series 0,1,1,2,3,5,8

#include <stdio.h>
#include <conio.h>
void fibonacci_series(int number)
{
    int a = 0, b = 1, c;
    printf("%d %d ", a, b);
    for (int i = 2; i < number; i++)
    {
        c = a + b;
        printf("%d ", c);
        a=b;
        b=c;
    }
}
int main()
{
    int number;
    printf("enter the number \n");
    scanf("%d", &number);
    fibonacci_series(number);
    return 0;
    getch();
}