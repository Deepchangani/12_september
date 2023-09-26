#include <stdio.h>
#include <conio.h>
int main()
{
    // 2 5 1 3 7
    int n;
    printf("enter the no of  elements \n");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("\n%d", &array[i]);
    }
    printf("After sorting the elements :->\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (array[j] > array[j+1])
            {
                int temp= array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("[%d] \n", array[i]);
    }

    return 0;
    getch();
}