// 6. Rotate Clockwise to an array by a given number of positions 
#include <iostream>
using namespace std;

int main() {
    int n, elem, pos;
    
    cout<<"Enter number of elements in array:";
    cin>>n;
    int arr[n];
    
    for (int i=0; i<n; i++){
        cout<<"Enter element "<<i<<" : ";
        cin>>elem;
        arr[i] = elem;
    }
    
    cout<<"Enter number of positions to rotate array:";
    cin>>pos;
    int temp[pos];
    
    for (int i=0; i<pos; i++){
        temp[i] = arr[n-pos+i];
    }
    
    for (int i=n-1; i>=pos; i--){
        arr[i] = arr[i-pos];
    }
    
    for (int i=0; i<pos; i++){
        arr[i] = temp[i];
    }
    
    cout<<"Rotated array:";
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}