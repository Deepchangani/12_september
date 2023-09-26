#include <stdio.h>
#include <conio.h>
struct employee
{
    int emp_no;
    char emp_name[20];
    char emp_address[30];
    int age;
} employee[5];
int main()
{
    for (int i = 0; i < 5; i++)
    {
        printf("enter the employee number\n");
        scanf("%d", &employee[i].emp_no);
        printf("enter the employee name \n");
        scanf("%s", &employee[i].emp_name);
        printf("enter the employee address \n ");
        scanf("%s", &employee[i].emp_address);
        printf("enter the employee age\n ");
        scanf("%d", &employee[i].age);
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("emp no %d\n", employee[i].emp_no);
        printf("emp name %s\n", employee[i].emp_name);
        printf("emp address %s\n", employee[i].emp_address);
        printf("emp age %d\n", employee[i].age);
        printf("---------------------------------");
    }

    return 0;
    getch();
}