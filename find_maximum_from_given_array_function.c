// write  a program to find out the max number form given array using function
#include <stdio.h>
#include <conio.h>
int main()
{
    int array[5] = {100, 200, 150, 500, 900};
    // int max=array[0];
    int max = 0;
    int size = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < size; i++)
    {

        if (array[i] > max)
        {
            max = array[i];
        }
    }
    printf("%d max", max);
    return 0;
    getch();
}