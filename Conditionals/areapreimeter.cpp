#include<iostream>
using namespace std;
int main(){
    double l,b;
    cout<<"Enter length : ";
    cin>>l;
    cout<<"Enter Breadth : ";
    cin>>b;
    double a = l*b;
    double p = 2*(l+b);
    cout<<a<<endl<<p<<endl;
    if(a>p){
        cout<<"Area of rec is Big"<<endl;
    }
    else{
        cout<<"Perimeter is Big";
    }
    return 0;
}