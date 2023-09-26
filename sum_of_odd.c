#include <stdio.h>
#include <conio.h>
int main()
{
    int sum = 0;
    printf("-------------------------\n");
    for (int i = 1; i <= 10; i += 2)
    {
        sum = sum + i;
    }
    printf(" sum of odd number is %d ", sum);
    printf("-------------------------\n");

    getch();
    return 0;
}