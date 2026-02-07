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
    // a>b and b>c -> a>c -> a greatest
    if(a>b){ // b can never be the greatest
    if(a>c){
    cout<<a<<"is greatest";
  }
    else{ // c>a , a>b -> c>a>b
    cout<<c<<" is greatest";
      }
    }
      else{ // b>a
        if(b>c){
        cout<<b<<" is greatest";
        }
        else{ // c>b, c>b>a
        cout<<c<<" is greatest";
        }
    }
    return 0;
}