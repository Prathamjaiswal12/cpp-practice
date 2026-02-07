#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter ram age : ";
    cin>>a;
    cout<<"Enter shyam age : ";
    cin>>b;
    cout<<"Enter ajay age : ";
    cin>>c;
    if(a>b && a>c ){
        cout<<"Ram is youngest";
    }
    else if ( b>a && b>c){
        cout<<"Shyam is youngest";
    }
    else{
        cout<<"Ajay is youngest";
    }
    return 0;
}