//  4. Implement a function to check if a number is a palindrome 
#include <iostream>
using namespace std;

int palindrome(int n){
    int rev = 0;
    while(n>0){
        int digit = n%10;
        rev = rev * 10 + digit;
        n = n/10;
    }
    return rev;
}

int main() {
    int n;
    cout<<"Enter Number:";
    cin>>n;
    
    cout<<"Reversed Number:"<<palindrome(n)<<endl;

    return 0;
}