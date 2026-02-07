#include<iostream>
using namespace std;
int main(){
   // rectangle banana hai
   // rows -> m, cols -> 5
int n;
cout<<"Enter number of rows : ";
cin>>n;
for(int i=1; i<=n; i++){ //rows = m
    for(int j=1; j<=n; j++){ //cols = n
        cout<<"* ";

    }
    cout<<endl;
}
    return 0;
}