// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     char str[20];
//     // int a,i;
//     printf("enter the string \n");
//     gets(str);
//     int i=0;

//     while(str[i]!='\0')
//     {
//         i++;
//     }
//     printf("the length of the string is :%d",i);
//     return 0;
//     getch();
// }
#include <stdio.h>
#include <conio.h>
// #include <stdlib.h>
struct employee
{
    int age;
    char name[20];
    int no;
    char address[40];
} e[5];
int main()
{
    for(int i=0;i<5;i++)
    {
    printf("enter the employee name \n");
    scanf("%s",e[i].name);
    printf("enter employee age \n");
    scanf("%d", &e[i].age);
    printf("enter the employee number/id \n");
    scanf("%d", &e[i].no);
    printf("enter employee address \n");
    scanf("%s", e[i].address);
    printf("---------------------------------\n");
    }

    printf("The employee details  is given below :->\n");
    printf("---------------------------------\n");


    for(int i=0;i<5;i++)
    {
    printf(" the employee name is => %s\n",e[i].name);
    printf(" employee age is =>      %d\n",e[i].age);
    printf(" the employee  number/id is => %d \n",e[i].no);
    printf(" employee address  is => %s\n",e[i].address);
    printf("---------------------------------\n");
    }

    return 0;
    getch();
}