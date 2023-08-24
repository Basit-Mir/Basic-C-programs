#include <iostream>
using namespace std;

int main()
{
    char operation;
    double x,y;
    cout<<"Enter a mathematical operation (+,-,/,*):";
    cin>>operation;
    cout<<"Enter two numbers:";
    cin>>x>>y;

    switch(operation)
    {
        case '+':
        cout<<x<<"+"<<y<<"="<<x+y;
        break;

        case '-':
        cout<<x<<"-"<<y<<"="<<x-y;
        break;

        case '*':
        cout<<x<<"*"<<y<<"="<<x*y;
        break;

        case '/':
        cout<<x<<"/"<<y<<"="<<x/y;
        break;

       default:
        cout<<"Write a proper operation!";

    }
    return 0;
}