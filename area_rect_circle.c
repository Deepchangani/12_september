#include <stdio.h>
#include <conio.h>
void area1();                   // circle
void area2(int s);              // square  s*s
void area3(int l, int b);       // rectangle
void area4(float b1, float h1); // traingle
// circle
void area1()
{
    float a, r;
    printf("enter the radius of circle \n");
    scanf("%f", &r);
    a = 3.14 * r * r;
    printf(" Area of circle is %f",a);
}
void area2(int s)
{
    float a;
    printf("\nenter the square of circle \n");
    scanf("%d", &s);
    a = s * s;
   printf(" Area of square is %f\n",a);
}
void area3(int l, int b)
{
    float a;
    printf("\nenter the  height \n");
    scanf("%d", &l);
    printf("\nenter the breadth \n");
    scanf("%d", &b);
    a = l * b;

    printf(" Area of rectangle is %f\n",a);
}
void area4(float h1, float b1)
{
    float a;
    printf("\nenter the  length \n");
    scanf("%f", &h1);
    printf("\nenter the breadth \n");
    scanf("%f", &b1);
    a = 0.5 * h1 * b1;

     printf(" Area of traingle  is %f",a);
}
int main()
{
    int s, l, b;
    float b1, h1;
    area1();
    area2(s);
    area3(l, b);
    area4(h1, b1);
    return 0;
}