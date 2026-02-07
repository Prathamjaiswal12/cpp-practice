#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;

    for(int i=1; i<=n; i++){ // rows
        for(int j=1; j<=n-i+1; j++){ // cols
           cout<<(char)(j+64)<<" "; 
    }
    cout<<endl;
}

    return 0;
}
