#include <iostream>
using namespace std;

int main() {
    int n, elem;
    cout<<"Enter number of Elements:";
    cin>>n;
    int arr[n];
    
    for (int i=0; i<n; i++){
        cout<<"Enter Elements "<<i<<" : ";
        cin>>elem;
        arr[i] = elem;
    }
    
    int mid = (n-1)/2;
    for (int i=0; i<mid; i++){
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    
    cout<<"Elements of Reversed Array:";
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}