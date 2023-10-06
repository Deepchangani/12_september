//  Write a program to find the multiplication values and the cubic values using inline function
#include<iostream>
using namespace std;
class cal
{
    public:
    inline float multiplication(float x,float y)
    {
        return x*y;
    }
    inline float cube (float x)
    {
        return x*x*x;
    }
};
int main()
{
 float a,b;
    cout<<"enter the number \n";
    cin>>a>>b;
    cal obj;
    cout<<"multiplication \n"<<obj.multiplication(a,b);
    cout<<" cube \n"<<obj.cube(a);
    return 0;
}