//  Create a class person having members name and age. Derive a class student
// having member percentage. Derive another class teacher having member
// salary. Write necessary member function to initialize, read and write data.
// Write also Main function (Multiple Inheritance)

#include <iostream>
using namespace std;
class person
{
protected:
    int age;
    string name;

public:
    void input()
    {
        cout << "enter the name " << endl;
        cin >> name;
        cout << "enter the age " << endl;
        cin >> age;
    }
     void display()
    {
        cout << "Name :" << name << endl;
        cout << "Age :" << age << endl;
    }
};

class student : public person
{
protected:
    double percentage;

public:
    void input1()
    {
        cout << "enter the percentage " << endl;
        cin >> percentage;
    }
     void display()
    {
        // person::display();
        cout << "Percentage :" << percentage << endl;
    }
};
class teacher :virtual public person
{
protected:
    int salary;

public:
    void input2()
    {
        cout << "enter the salary " << endl;
        cin >> salary;
    }
     void display()
    {
        // person ::display();
        cout << "Salary:" << salary << endl;
    }
};
int main()
{
    student s;
    teacher t;
    person p;
    s.input();
    s.input1();
    s.display();
    cout << "Teacher details \n";
    p.input();
    t.input2();
    p.display();
    t.display();

    return 0;
}