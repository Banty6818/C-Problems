// 8. Implement a function to calculate the factorial of a large number.
#include <iostream>
using namespace std;

long long factorial(int n){
    long long result = 1;
    if(n == 0)
        return result;
    while(n>0){
        result *= n;
        n--;
    }
    return result;
}

int main() {
    int n;
    cout<<"Enter Number:";
    cin>>n;
    
    if(n < 0)
        cout << "Factorial is not defined for negative numbers." << endl;
    else
        cout << "Factorial of " << n << " is: " << factorial(n) << endl;
    return 0;
}