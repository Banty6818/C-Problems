#include <iostream>
using namespace std;

int main() {
    int n, elem, max, mini;
    cout<<"Enter number of Elements:";
    cin>>n;
    int arr[n];
    
    for (int i=0; i<n; i++){
        cout<<"Enter Elements "<<i<<" : ";
        cin>>elem;
        arr[i] = elem;
    }
    
    max = arr[0];
    mini = arr[0];
    for (int i=0; i<n; i++){
        if (arr[i] > max){
            max = arr[i];
        }
        else if(arr[i] < mini){
            mini = arr[i];
        }
    }
    cout<<"Maximum Value of Array:"<<max<<endl;
    cout<<"Minimum Value of Array:"<<mini<<endl;
    
    return 0;
}