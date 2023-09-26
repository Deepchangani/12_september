#include <stdio.h>
#include <conio.h>
int main()
{
    int n, multiplication = 1;
    printf("enter the number");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        multiplication = n * i;
        printf(" %d * %d =%d\n", n, i, multiplication);
    }
    return 0;
    getch();
}