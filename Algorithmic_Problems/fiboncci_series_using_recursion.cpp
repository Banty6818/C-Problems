// 2. Implement a recursive function to calculate the Fibonacci sequence 
#include <iostream>
using namespace std;

int fib(int n){
  if(n<=1){
    return n;
  }
  else{
    return fib(n-1) + fib(n-2);
  }
}

int dispfibseries(int n){
    for (int i=0; i<=n; i++){
        cout<<fib(i)<<" ";
    }
    cout<<endl;
    return 0;
}

int main() 
{
    int n;
    cout<<"Enter number:";
    cin>>n;
    
    cout<<"Fiboncci number for index "<<n<<" is : "<<fib(n)<<endl;
    cout<<"Fiboncci series is :";
	dispfibseries(n);
	
    return 0;
}