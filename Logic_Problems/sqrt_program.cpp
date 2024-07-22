// 5. Implement a function to calculate the square root of a number
#include <iostream>
#include <cmath>
using namespace std;

void square_root(double n){
    cout<<pow(n, 0.5)<<endl;
}

int main() {
    double n;
    cout<<"Enter Number:";
    cin>>n;
    
    cout<<"Square Root of "<<n<<" is: ";
    square_root(n);
    return 0;
}