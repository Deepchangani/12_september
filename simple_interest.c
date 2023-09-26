#include <stdio.h>
#include<conio.h>

int main()
{
    float principle, time;
    float rate,Simple_interest ;
    printf("Enter principle (amount) ->");
    scanf("%f", &principle);

    printf("Enter time ->");
    scanf("%f", &time);

    printf("Enter rate ->");
    scanf("%f", &rate);
    Simple_interest = (principle * time * rate) / 100;

    printf("Simple Interest is = %f", Simple_interest);

    return 0;
    getch();
}