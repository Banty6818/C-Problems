// 2.2. Print an inverted left-angled triangle pattern of stars of height n. 
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number:";
    cin>>n;
    
    for (int i=n; i>0; i--){
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