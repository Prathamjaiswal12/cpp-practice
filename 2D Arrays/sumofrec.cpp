#include<iostream>
using namespace std;
int main(){
    int n=5, m=4;
    int arr[5][4] = {
        {1,  2,  3,  4},
        {5,  9, 10, 11},
        {6, 12, 15, 16},
        {7, 13, 17, 19},
        {8, 14, 18, 20}
    };
    int l1 = 1, r1 = 1;
    int l2 = 4, r2 = 2;
    int sum = 0;
    for(int i=l1; i<=l2; i++){
        for(int j=r1; j<=r2; j++){
            sum += arr[i][j];
        }
    }
    cout<<"Sum of rectangle is : "<<sum<<endl;
    return 0;
}