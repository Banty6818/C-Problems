// 13. Check if a Number is Power of 2
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout<<"Enter number:";
    cin>>n;
    
    for(int i=0; i<=n; i++){
        if (pow(2, i)==n){
            cout<<2<<"^"<<i<<"="<<n<<endl;
            break;
        }
        else{
            if (i==n){
                cout<<"Invalid number"<<endl;
            }
        }
    }

    return 0;
}