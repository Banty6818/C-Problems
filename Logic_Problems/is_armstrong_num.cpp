// 9. Implement a function to check if a number is an Armstrong number 
#include <iostream>
using namespace std;

int is_armstrong(int n){
    int result = 0;
    while(n>0){
        int decimal = n%10;
        result += (decimal * decimal * decimal);
        n /= 10;
    }
    return result;
}

int main() {
    int n;
    cout<<"Enter Number:";
    cin>>n;
    
    if (is_armstrong(n) == n){
        cout<<n<<" is armstrong number.";
    }
    else{
        cout<<n<<" is not armstrong number.";
    }
    
    return 0;
}