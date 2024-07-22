// 10. Implement a function to calculate the sum of digits of a number.
#include <iostream>
using namespace std;

int cal_sum(int n){
    int result = 0;
    while(n>0){
        result += n%10;
        n/=10;
    }
    return result;
}

int main() {
    int n;
    cout<<"Enter Number:";
    cin>>n;
    
    cout<<"sum of digits of "<<n<<" is: "<<cal_sum(n);
    
    return 0;
}