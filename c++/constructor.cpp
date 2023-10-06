
#include<iostream>
using namespace std;

class a
{
    public:
    a(int x,int y)
    {
        cout<<"addition of two number is "<<x+y<<endl;
    }
};
class b
{
     public:
    b(int x,int y)
    {
        cout<<"substraction of two number is "<<x-y<<endl;
    }
};
class c
{
     public:
    c(int x,int y)
    {
        cout<<"multiplication of two number is "<<x*y<<endl;
    }
};
class d
{
     public:
    d(int x,int y)
    {
        cout<<"division of two number is "<<x/y<<endl;
    }
};
int main()
{
    int x, y;
    cout<<"enter 2 numbers \n";
    cin>>x>>y;
    a add(x,y);
    b sub(x,y);
    c multi(x,y);
    d division(x,y);
}
// #include<iostream>
// using namespace std;
// class calculator
// {
//     public:
//     double num1,num2;
//     //
//     calculator(double n1,double n2)
//     {
//         num1=n1;
//         num2=n2;
//     }
//     double add()
//     {
//         return num1+num2;
//     }
//     double substract()
//     {
//         return num1-num2;
//     }
//     double div()
//     {
//         return num1/num2;
//     }
//     double multi()
//     {
//         if(num2==0)
//         {
//             return 0;
//         }
//         return num1*num2;
//     }
// };
// int main()
// {   
//     double n1,n2;
//     cout<<"enter 2 numbers \n";
//     cin>>n1>>n2;
//     calculator c(n1,n2);
//     cout<<c.add()<<endl;
//     cout<<c.substract()<<endl;
//     cout<<c.div()<<endl;
//    cout<< c.multi()<<endl;
//     return 0;
// }