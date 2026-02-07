#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int f = 1; //store karunga highest factor
    for(int i=n/2; i>=1; i--){
        if(n%i==0){
    cout<<i<<" ";
    break; //to get out of the loop immediately.
        }
    }
    
    return 0;
}