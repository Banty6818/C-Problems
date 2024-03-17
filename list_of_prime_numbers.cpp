#include<iostream>
using namespace std;

int main() {
	
	int n;
	cout<<"Enter Number:";
	cin>>n;
	
	int num = 2;
	while(num<n){
		
		int div = 2;
		int flag = 1;
		
		while(div<num){
			if (num % div == 0){
				flag = 0;
				break;
			}
			else{
				div += 1;
			}
		}
		if (flag == 1){
			cout<<num<<" ";
		}
		num += 1;
	}
}