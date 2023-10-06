#include <iostream>
using namespace std;
class calculator
{
public:
    int number1, number2, choice;
    void function()
    {
    cout << "enter two number " << endl;
    cin >> number1 >> number2;
  
    cout << "press 1 Addition" << endl;
    cout << "press 2 substraction" << endl;
    cout << "press 3 Addition" << endl;
    cout << "press 4 substraction" << endl;
    cout << "enter the choice" << endl;
    cin >> choice;
   
   
if (choice == 1)
{
    cout << "sum of a and b is " << number1 + number2;
}
if (choice == 2)
{   
    cout<< "substraction of a and b is " << number1 - number2;
    
}
if (choice == 3)
{
    cout<< "Multiplication of a and b is " << number1 * number2;
}
if (choice == 4)
{
    cout << "division of a and b is " << number1 / number2;
}
if (choice >= 5 && choice < 1)
{
    cout << "Invalid";
}
    }
};
    
    
int main()
{
    calculator c;
    c.function();
    return 0;
}