// 3. Implement a function to calculate the least common multiple (LCM) of two numbers 
#include <iostream>
using namespace std;

int gcd(int n, int m){
    int min, result = 0;
    if (n<m){
        min = n;
    }
    else{
        min = m;
    }
    
    for(int i=min; i>0; i--){
        if (n%i==0 && m%i==0){
            result = i;
            break;
        }
    }
    return result;
}

int lcm(int n, int m){
    int result = (n*m)/gcd(n, m);
    return result;
}

int main() {
    int n, m;
    cout<<"Enter number1:";
    cin>>n;
    cout<<"Enter number2:";
    cin>>m;
    
    cout<<"LCM of "<<n<<" & "<<m<<" is: "<<lcm(n, m)<<endl;

    return 0;
}