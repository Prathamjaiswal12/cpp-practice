#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 1st side : ";
    cin>>a;
    cout<<"Enter 2nd side : ";
    cin>>b;
    cout<<"Enter 3rd side : ";
    cin>>c;
    if(a<b && a<c ){
        cout<<a<<" is least";
    }
    else if ( b<a && b<c){
        cout<<b<<" is least";
    }
    else{
        cout<<c<<" is least";
    }
    return 0;
}