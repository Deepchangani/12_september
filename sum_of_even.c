#include <stdio.h>
#include <conio.h>
int main()
{
    int sum = 0;
    for (int i = 0; i <= 10; i += 2)
    {
        sum = sum + i;
    }
    printf(" sum of even number is %d ", sum);
    printf("-------------------------\n");
    for (int i = 1; i <= 10; i += 2)
    {
        sum = sum + i;
    }
    printf(" sum of odd number is %d ", sum);

    getch();
    return 0;
}