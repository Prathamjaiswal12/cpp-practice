#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter number1 : ";
    cin>>num1;
    char op;
    cout<<"Enter operator : ";
    cin>>op;
    cout<<"Enter number2 : ";
    cin>>num2;
    switch (op){
    case '+':
    cout<<num1+num2;
    break;
    case '-':
    cout<<num1-num2;
    break;
    case '*':
    cout<<num1*num2;
    break;
    case '/':
    cout<<num1/num2;
    break;
    
    default:
       cout<<"Invalid Operator";
    }
    return 0;
}