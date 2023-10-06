#include <iostream>
using namespace std;
class calculator
{
public:
    int number1, number2, choice;
    cout << "enter two number " << endl;
    cin >> number1 >> number2;
    cout << "enter the choice" << endl;
    cin >> choice;
    cout << "1.Addition" << endl;
    cout << "2.substraction" << endl;
    cout << "3.Addition" << endl;
    cout << "4.substraction" << endl;
    void sum()
    {

        cout << "sum of a and b is " << number1 + number2;
    }
    void substraction()

        cou<< "substraction of a and b is " << number1 - number2;
} void multiplication()
{

    cout << "Multiplication of a and b is " << number1 * number2;
}
void division()
{

    cout << "division of a and b is " << number1 / number2;

}
;
int main()
{
    calculator c;
    c.calculator();

    return 0;
}