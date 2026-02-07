#include<iostream>
using namespace std;
int main(){
    int cp, sp;
    cout<<"Enter selling price : ";
    cin>>sp;
    cout<<"Enter cost price : ";
    cin>>cp;
    if(sp>cp){
        cout<<"Profit"<<endl;
    }
        else if (sp<cp){
            cout<<"Loss"<<endl;
        }
        else if(sp==cp){
            cout<<"No profit No loss"<<endl;
        }
    return 0;
}