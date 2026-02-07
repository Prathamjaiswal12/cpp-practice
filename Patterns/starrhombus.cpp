#include<iostream>
using namespace std;
int main(){

int n;
cout<<"Enter number of rows : ";
cin>>n;

for(int i=1; i<=n; i++){ //rows = m
    for(int j=1; j<=n-i+1; j++){
        cout<<" "<<" ";
    }
    for(int j=1; j<=n; j++){ //cols = n
        cout<<"* ";
}
cout<<endl;
}
return 0;
}