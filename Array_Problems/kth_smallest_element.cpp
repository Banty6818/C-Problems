// kth smallest element of array
#include <iostream>
using namespace std;

int main() {
    int n, elem;
    cout<<"Enter number:";
    cin>>n;
    
    int arr[n];
    // inputing an array
    for(int i=0; i<n; i++){
        cout<<"Enter element:";
        cin>>elem;
        arr[i] = elem;
    }
    
    // sorting an array
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    int k;
    cout<<"Enter Kth index:";
    cin>>k;
    cout<<"Kth smallest number:"<<arr[k-1]<<endl;

    return 0;
}