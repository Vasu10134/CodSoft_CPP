#include<iostream>
using namespace std;
int main() 
{
    double no1, no2;
    char op;

    cout<<"Enter your first number : ";
    cin>>no1;

    cout<<"Enter your second number : ";
    cin>>no2;

    cout<<"Enter operation (+, -, *, /) : ";
    cin>>op;

    double result;

    switch(op) 
    {
        case '+':
            result=no1+no2;
            break;
        case '-':
            result=no1-no2;
            break;
        case '*':
            result=no1*no2;
            break;
        case '/':
            if(no2!=0) 
            {
                result=no1/no2;
            } 
            else 
            {
                cout<<"Error! Division by zero .";
                return 1;
            }
            break;
        default:
            cout<<"Error! Invalid operation .";
            return 1;
    }

    cout<<"Result : "<<result;
    return 0;
}
