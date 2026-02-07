#include<iostream>
using namespace std;
int main(){
   // rectangle banana hai
   // rows -> m, cols -> 5
int n;
cout<<"Enter number of cols : ";
cin>>n;
for(int i=1; i<=n; i++){ //rows = m
    for(int j=1; j<=i; j++){ //cols = n
        cout<<i<<" ";
    }
    cout<<endl;
}
    return 0;
}