#include <iostream>
using namespace std;

int main() {
    int n, elem, s_elem;
    cout<<"Enter number of elements:";
    cin>>n;
    int arr[n];
    
    for (int i=0; i<n; i++){
        cout<<"Enter Elements "<<i<<" : ";
        cin>>elem;
        arr[i] = elem;
    }
    
    cout<<"Enter element for searching:";
    cin>>s_elem;
    for (int i=0; i<n; i++){
        if (s_elem == arr[i]){
            cout<<"Index:"<<i<<" & ";
            cout<<"Value:"<<s_elem<<endl;
        }
    }
    return 0;
}