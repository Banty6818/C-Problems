// 1.1 Print a left-angled triangle pattern of stars of height n.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number:";
    cin>>n;
    
    for (int i=1; i<n+1; i++){
        for (int j=0; j<n-i; j++){
            cout<<" ";
        }
        for (int k=n-i; k<n; k++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}