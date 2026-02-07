#include<iostream>
using namespace std;
int main(){
    // 5 integers -> 3,2,4,5,3,1
    int arr[5]; //declaration
    cout<<"Enter array elements :";
    for(int i=0; i<=4; i++){
        cin>>arr[i];
    }
    for(int i=0; i<=4; i++){
        cout<<arr[i]*2<<" ";
    }
    arr[0] = 100;
    cout<<endl;
    for(int i=0; i<=4; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}