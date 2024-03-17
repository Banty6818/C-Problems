// check whether the given number is prime or not
#include<iostream>
using namespace std;

int main(){
	
	int n;
	cout<<"Enter number:";
	cin>>n;
	
	int flag;
	int div = 2;
		
	while(div<n){
		if (n%div==0){
			flag = 0;
			break;
		}
		else{
			div += 1;
		}
	}
		
	if (flag == 0) {
		cout<<n<<" is not prime number."<<endl;
	}
	else{
		cout<<n<<" is prime number."<<endl;
	}
}
