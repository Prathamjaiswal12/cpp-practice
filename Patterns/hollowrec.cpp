#include<iostream>
using namespace std;
int main(){
   // rectangle banana hai
   // rows -> m, cols -> 5
int rows,cols;
cout<<"Enter number of rows : ";
cin>>rows;
cout<<"Enter number of cols : ";
cin>>cols;

for(int i=1; i<=rows; i++){ //rows = m
    for(int j=1; j<=cols; j++){ //cols = n
        if((i==1 || i==rows) || (j==1 || j==cols)){
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