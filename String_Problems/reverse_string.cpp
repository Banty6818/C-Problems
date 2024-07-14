#include <iostream>
using namespace std;

int main() {
    string inp, rev_inp;
    int n;
    
    cout<<"Enter String:";
    cin>>inp;
    
    n = inp.length();
    rev_inp = "";
    
    for (int i=n-1; i>=0; i--){
        rev_inp += inp[i];
    }
    
    cout<<"Reversed String:"<<rev_inp<<endl;
    
    return 0;
}