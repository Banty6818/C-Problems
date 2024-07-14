#include <iostream>
using namespace std;

int main() {
    string s;
    char elem;
    int n;
    cout<<"Enter String:";
    cin>>s;

    n = s.length();
    cout<<"Enter element for searching:";
    cin>>elem;
    for (int i=0; i<n; i++){
        if (s[i] == elem){
            cout<<"Index:"<<i<<" & ";
            cout<<"Value:"<<elem<<endl;
        }
    }

    return 0;
}