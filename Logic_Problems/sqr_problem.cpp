// 12. Implement a funtion to display square of number
#include <iostream>
using namespace std;

int sqr(int n){
    return n*n;
}

int main() {
    int n;
    cout<<"Enter number:";
    cin>>n;
    
    cout<<"Square of "<<n<<" is : "<<sqr(n);

    return 0;
}