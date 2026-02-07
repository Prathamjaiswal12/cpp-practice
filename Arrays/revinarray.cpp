#include<iostream>
using namespace std;
int main(){
    int arr[] = {12,6,7,34,9,230,2,8};
    int n = sizeof(arr)/4;
    int b[n];
    for(int i=0; i<n; i++){
        b[i]= arr[n-1-i];
        cout<<b[i]<<" ";
    }
    return 0;
}