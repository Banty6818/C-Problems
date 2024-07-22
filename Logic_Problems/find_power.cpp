// 6. Implement a function to calculate the power of a number (e.g. x^y).
#include <iostream>
#include <cmath>
using namespace std;

void cal_pow1(double num, double power){
    cout<<pow(num, power)<<endl;
}

void cal_pow2(double num, double power){
    double result=1;
    for(int i=0; i<power; i++){
        result *= num;
    }
    cout<<result<<endl;
}

int main() {
    double number, power;
    cout<<"Enter Number:";
    cin>>number;
    cout<<"Enter Power:";
    cin>>power;
    
    int choice;
    cout<<"Choices:\n 1. Using Built-in Function\n 2. Manually\n";
    cout<<"Enter choice:";
    cin>>choice;
    if (choice == 1){
        cout<<number<<"^"<<power<<":";
        cal_pow1(number, power);
    }
    else if (choice == 2){
        cout<<number<<"^"<<power<<":";
        cal_pow2(number, power);
    }
    else{
        cout<<"Invalid Input"<<endl;
    }
    
    return 0;
}