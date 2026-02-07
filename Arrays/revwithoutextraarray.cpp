#include<iostream>
using namespace std;
int main(){
    int arr[] = {12,6,7,34,9,230,2,8};
    int n = sizeof(arr)/4;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    int i = 0;
    int j = n-1;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--; 
    }
    cout<<endl;
     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}