#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    if(n>99 && n<1000){
        cout<<"Three Digit Number";
    }
    else{
        cout<<"Not A Three Digit Number";
    }
    return 0;
}