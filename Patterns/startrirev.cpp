#include<iostream>
using namespace std;
int main(){

int n;
cout<<"Enter number of rows : ";
cin>>n;
// ek loop k andar do loop chalado.
for(int i=1; i<=n; i++){ //rows = m
    for(int j=1; j<=n+1-i; j++){
        cout<<" "<<" ";
    }
    for(int j=1; j<=i; j++){ //cols = n
        cout<<"* ";
}
cout<<endl;
}
return 0;
}