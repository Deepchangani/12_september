#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d", &n);
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial = factorial * i;
    }
    printf(" factorial of %d is = %d", n, factorial);

    return 0;
}
