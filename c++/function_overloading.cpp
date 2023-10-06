//  Write a program to Mathematic operation like Addition, Subtraction,
// Multiplication, Division Of two number using different parameters and
// Function Overloading
#include <iostream>
using namespace std;
int cal(int a, int b)
{
    return a + b;
}

int cal(int a, int b, int c)
{
    return a - b - c;
}

int cal(int a, int b, int c, int d)
{
    return a * b * c * d;
}

int cal(int b,float a)
{
    return b/a;
}

int main()
{
    int num1, num2 , num3 , num4 ;
    cout << "enter the number 1 " << endl;
    cin >> num1;
    cout << "enter the number 2 " << endl;
    cin >> num2;
    cout << "enter the number 3 " << endl;
    cin >> num3;
    cout << "enter the number 4 " << endl;
    cin >> num4;

    cout << "Addition of num1 and number2: " << cal(num1, num2) << "\n";
    cout << "Subtraction of num1 ,num2 and num3 is " << cal(num1, num2, num3) << "\n";
    cout << "Multiplication of num1 ,num2 and num3 and num4 is : " << cal(num1, num2, num3, num4) << "\n";
    cout << "Division of num2 and num1 is : " << cal(num1, num2) << "\n";

    return 0;
}
