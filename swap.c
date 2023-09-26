#include<stdio.h>
int main()
{
    int x=10,y=20;
    x=x+y;      //30
    y=x-y;      //10
    x=x-y;
    printf("%d %d",x,y);

    // x=x*y;      
    // y=x/y;      //y=10
    // x=x/y;

    // printf("\n%d %d",x,y);
    return 0;
}