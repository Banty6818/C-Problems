// 9. Implement a function to check if a string is a palindrome
#include <iostream>
using namespace std;

void is_palindrome(string s){
    
    string rev_s="";
    for (int i=(s.length()-1); i>=0; i--){
        rev_s += s[i];
    }
    
    if (s==rev_s){
        cout<<"String is a Palindrome"<<endl;
    }
    else{
        cout<<"String is not a Palindrome"<<endl;
    }
}

int main() {
    string s;
    cout<<"Enter string:";
    cin>>s;
    is_palindrome(s);
    
    return 0;
}