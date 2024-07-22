// 1. Implement a function to check if a number is prime.
#include <iostream>
using namespace std;

int is_prime(int n){
    int flag = 1;
    int div = 2;
    
    if (n<=1){
        flag = 0;
    }
    
    while(div<n){
        if (n%div==0){
            flag = 0;
            break;
        }
        else{
            div++;
        }
    }
    return flag;
}

int main() {
    int n;
    cout<<"Enter Number:";
    cin>>n;
    
    if (is_prime(n)==0){
        cout<<n<<" is not prime.";
    }
    else{
        cout<<n<<" is prime.";
    }
    
    return 0;
}