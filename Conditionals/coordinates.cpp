#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the coordinates (x,y) :";
    cin>>x>>y;
    if(x==0 and y==0){
        cout<<"The point is at the origin";
    }
    else if(x==0){
        cout<<"The point lies on the Y-axis";
    }
    else if(y==0){
        cout<<"The point lies on the X-axis";
    }
    else if(x>0 and y>0){
        cout<<"The point lies on the 1st quadrant";
    }
    else if(x<0 and y>0){
        cout<<"The point lies on the 2nd quadrant";
    }
    else if(x<0 and y<0){
        cout<<"The point lies on the 3rd quadrant";
    }
    else if(x>0 and y<0){
        cout<<"The point lies on the 4th quadrant";
    }
    return 0;
}