#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    if((n%5==0 || n%3==0) && (n%15!=0) ){
        cout<<"Div by 5 or 3 but not 15";
    }
    else{
        cout<<" Not Div by 5 or 3 but  15";
    }
    return 0;
}