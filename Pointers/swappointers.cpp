#include<iostream>
using namespace std;
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){ //pass by reference
    int x = 12;
    int y = 45;
    cout<<x<<" "<<y<<endl;
    swap(&x,&y);
    cout<<x<<" "<<y<<endl;
    return 0;
}