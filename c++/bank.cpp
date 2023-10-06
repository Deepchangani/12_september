#include<iostream>
#include<string.h>
using namespace std;
class bank
{
    public:
    string name;
    int account,withdraw;
    long accountNumber;
    float deposit;
    int balance=20000;
    void intro()
    {
    cout<<"enter you name "<<endl;
    cin>>name;
    cout<<"enter the account number it should be write carefully "<<endl;
    cin>> accountNumber;

    cout<<" press 1 for saving account\n press 2 for current account "<<endl;
    cout<<" choose your account"<<endl;
    cin>>account;
    if(account==1)
    {
        cout<<"It is saving account "<<endl;
    }
    else if(account==2)
    {
        cout<<"It is current account "<<endl;
    }
    else
    {
        cout<<"choose current account"<<endl;
    }
 }
    // cout<<"enter the bank balance "<<endl;
    // cin>>balance;
    // int assign(int balance)
    // {
    //     int total=balance;
    //     cout<<"total balance is "<<total;
    //     return total;
    // }
    // int depositt(int balance)
    // {  
    //     cout<<"enter the amount which you want to deposit "<<endl;
    //     cin>>deposit;
    //    int total=balance+deposit;
        
    //     return total;
        
    // }
    int withdraww(int balance)
    {
         cout<<"enter the amount which you want to withdraw "<<endl;
        cin>>withdraw;
        int total=balance-withdraw;
        cout<<total<<endl;
        return total;
    }
    void checking_balance(int balance)
    {
        cout<<balance<<endl;
    }
    // void display_name_balance(int balance)
    // {
    //     cout<<name<<" has a "<<balance<<" in his account "<<endl; 
    // }
};
int main()
{
    bank b;
    b.intro();
    // b.assign( int balance);
    b.depositt( balance);
    b.withdraww( balance);
    b.checking_balance( balance);
    // b.display_name_balance( balance);
    return 0;
}