#include<stdio.h>
#include<conio.h>
int main()
{
    printf("enter the number ");
    for(int i=0;i<=10;i+=2)
    {
        printf("%d this are even number \n",i);
    }
    printf("-------------------------\n");
      for(int i=1;i<=10;i+=2)
    {
       printf("%d this are odd number \n",i);
    }
    
    getch();
    return 0;
}