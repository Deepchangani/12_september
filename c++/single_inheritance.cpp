// //  Assume a class cricketer is declared. Declare a derived class batsman from
// // cricketer. Data member of batsman. Total runs, Average runs and best
// // performance. Member functions input data, calculate average runs, Display
// // data. (Single Inheritance)

#include <iostream>
using namespace std;
class cricketer
{
protected:
    string name;

public:
    void input()
    {
        cout << "enter the name \n";
        cin >> name;
    }
};
class batsman : public cricketer
{
protected:
    int total_run, best_performance;
    double average_runs;

public:
    void Input( )
    {
       
        cout << "enter the batsman total runs \n";
        cin >> total_run;
        cout << "enter the batsman performance \n";
        cin >> best_performance;
        cal_average_runs();
    }
    void cal_average_runs()
    {
        average_runs = static_cast<double>(total_run) / 5;
    }
    void display()
    {
        cout << "\nBatsman Data:" << endl;
        cout << "Name: " << name << endl;
        cout << "Total Runs: " << total_run << endl;
        cout << "average Runs: " << average_runs << endl;
        cout << "Best Performance: " << best_performance << "\n";
    }
};

int main()

{
   
    batsman b;
    b.input();
    b.Input();
    b.display();
    return 0;
}