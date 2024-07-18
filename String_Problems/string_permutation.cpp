// Given two strings, write a method to decide if one is a permutation of other.
#include <iostream> 
using namespace std;

void sort(string& str) { 
    int len = str.length(); 
    for (int i = 0; i < len - 1; i++) { 
        for (int j = i + 1; j < len; j++) { 
            if (str[i] > str[j]) { // Swap characters 
            string temp(1, str[i]); 
            str[i] = str[j]; 
            str[j] = temp[0]; 
            } 
        } 
    } 
}

void str(string s1, string s2){ 
    if (s1.length() != s2.length()){ 
        cout<<"String is not permuted."; } 
    else{ 
        sort(s1); 
        sort(s2); 
        if (s1==s2){ 
            cout<<"String is permuted."; 
        } 
        else{ 
            cout<<"String is not permuted."; 
        } 
    } 
}

int main() { 
    string s1, s2; 
    cout<<"Enter String-1:"; 
    cin>>s1; 
    cout<<"Enter String-2:"; 
    cin>>s2;
    
    str(s1, s2);
    
    return 0;
}