#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter number of rows : ";
cin>>n;

for(int i=1; i<=n; i++){ //rows = m
    for(int j=1; j<=n; j++){ //cols = n
        if(i==j || (i+j)==(n+1)){
            cout<<"*"<<" ";
        }
        else{
            cout<<" "<<" ";
        }
    }
    cout<<endl;
}
    return 0;
}