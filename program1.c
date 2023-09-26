#include <stdio.h>
#include <conio.h>
int main()
{
    char name[20], address[40];
    int birthdate, age;
    printf("enter your name\n");
    gets(name);
    printf("enter your age\n");
    scanf("%d",&age);
    printf("enter your birth date\n");
    scanf("%d",&birthdate);
    printf("enter your address\n");
    gets(address);

    printf("-------------------------\n");
    printf("enter your name %s\n",name);
    printf("enter your age %d\n",age);
    printf("enter your birth date %d ",birthdate);
    printf("\nenter your address %s\n",address);
    return 0;
    getch();
}