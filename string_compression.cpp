// 7. Implement a string compression algorithm (e.g. run-length encoding) 
#include <iostream>
using namespace std;

int main() {
    string s, new_s;
    cout<<"Enter String:";
    cin>>s;
    int n = s.length(); 
    int count = 1;
    
    for (int i=0; i<n; i++){
        if (s[i]==s[i+1]){
            count += 1;
        }
        else{
        new_s += s[i];
        new_s += to_string(count);
        count = 1;
        }
    }
    
    cout<<new_s;
    return 0;
}