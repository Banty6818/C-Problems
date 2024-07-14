// 1.Print a right-angled triangle pattern of stars of height n.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number:";
    cin>>n;
    
    for (int i=1; i<n+1; i++){
        for (int j=0; j<i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}