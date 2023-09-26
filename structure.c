#include <stdio.h>
#include <conio.h>
// #include <stdlib.h>
struct employee
{
    int age;
    char name[20];
    int no;
    char address[40];
} e;
int main()
{
    printf("enter the employee name \n");
    scanf("%s",e.name);
    printf("enter employee age \n");
    scanf("%d", &e.age);
    printf("enter the employee number/id \n");
    scanf("%d", &e.no);
    printf("enter employee address \n");
    scanf("%s", e.address);
    printf("---------------------------------\n");

    printf("The employee details  is given below :->\n");
    printf("---------------------------------\n");


    printf(" the employee name is => %s\n",e.name);
    printf(" employee age is =>      %d\n",e.age);
    printf(" the employee  number/id is => %d \n",e.no);
    printf(" employee address  is => %s\n",e.address);

    return 0;
    getch();
}