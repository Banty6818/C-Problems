// 5. Find the first duplicate in an array 
#include <iostream>
using namespace std;

int main() {
    int n, elem;
    
    cout<<"Enter number of elements in array:";
    cin>>n;
    int arr[n];
    
    for (int i=0; i<n; i++){
        cout<<"Enter element "<<i<<" : ";
        cin>>elem;
        arr[i] = elem;
    }
    
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (arr[i]==arr[j] && i!=j){
                cout<<endl<<"First Duplicate:"<<endl;
                cout<<"Index:"<<i<<","<<j<<" & Value:"<<arr[j]<<endl;
                return 0;
            }
        }
    }
    cout<<endl<<"No duplicate found"<<endl;
    return 0;
}