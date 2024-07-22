// 7. Implement a function to check if a number is a perfect number 
#include <iostream>
using namespace std;

int is_perfect_num(int n){
    int sum = 0;
    for (int i=1; i<n; i++){
        if (n%i==0){
            sum += i;
        }
    }
    if (sum == n){
        return 1;
    }
    else{
        return 0;
    }
}

int main() {
    int n;
    cout<<"Enter Number:";
    cin>>n;
    
    if (is_perfect_num(n)==1){
        cout<<n<<" is perfect number.";
    }
    else{
        cout<<n<<" is not perfect number.";
    }
    return 0;
}