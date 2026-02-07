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
    if(op=='+'){
        cout<<num1+num2;
    }
    else if(op=='-'){
        cout<<num1-num2;
    }
    else if(op=='*'){
        cout<<num1*num2;
    }
    else if(op=='/'){
        cout<<num1/num2;
    }
    return 0;
}