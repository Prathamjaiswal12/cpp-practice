#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;

    for(int i=1; i<=n; i++){ // rows
        for(int j=1; j<=2*i-1; j+=2){ // cols
           cout<<j<<" "; 
    }
    cout<<endl;
}

for(int i=1; i<=n; i++){ // rows
        for(int j=1; j<=i; j++){ // cols
           cout<<2*j-1<<" "; 
    }
    cout<<endl;
}

for(int i=1; i<=n; i++){ // rows
    int a = 1;
        for(int j=1; j<=i; j++){ // cols
           cout<<2*j-1<<" "; 
           a += 2;
    }
    cout<<endl;
}

    return 0;
}
