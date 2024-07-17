// 5.Print a hollow square pattern of stars of side length n. 
#include <iostream>
using namespace std;

int loop(int n){
    for (int i=0; i<n; i++){
        cout<<"*";
    }
    cout<<endl;
    return 0;
}

int main() {
    int n;
    cout<<"Enter number:";
    cin>>n;
    loop(n); // for first row
    
    for (int i=0; i<n-2; i++){
        cout<<"*";
        for (int j=0; j<n-2; j++){
            cout<<" ";
        }
        cout<<"*"<<endl;
    }

    loop(n); // for last row
    return 0;
}