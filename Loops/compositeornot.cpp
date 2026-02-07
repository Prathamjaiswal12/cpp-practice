#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    bool flag = true; //true means prime
    for(int i=2; i<=n/2; i++){
        if(n%2==0){
            flag = false; // false means compsosite
            break;
        }
    }
    if(n==1){
        cout<<"Neither Prime Nor Composite";
    }
   else if(flag==true){
        cout<<"Prime";
    }
    else{
        cout<<"Composite";
    }
    return 0;
}