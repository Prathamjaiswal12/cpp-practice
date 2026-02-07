#include<iostream>
using namespace std;
void greet(){
    cout<<"Good Morning"<<endl;
    cout<<"How are you ?"<<endl;
    return;
}
void india(){
    cout<<"You are in india"<<endl;
    return;
}
int main() {
    cout<<"You are in main"<<endl;
    greet();
    cout<<"Hey"<<endl;
    india();
    greet();
}