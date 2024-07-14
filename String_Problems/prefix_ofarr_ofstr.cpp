// 8. Find the longest common prefix in an array of strings
#include <iostream>
using namespace std;

int main() {
    int n, len;
    string elem;
    
    cout<<"Enter number of elements:";
    cin>>n;
    string arr[n];
    
    for (int i=0; i<n; i++){
        cout<<"Enter string:";
        cin>>elem;
        arr[i] = elem;
    }
    
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (arr[i] > arr[j]){
                string temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    string prefix = "";
    if (arr[0].length()<arr[n-1].length()){
        len = arr[0].length();
    }
    else{
        len = arr[n-1].length();
    }
    
    for (int i=0; i<len; i++){
        if (arr[0][i] == arr[n-1][i]){
            prefix += arr[0][i];
        }
    }
    cout<<"Longest common prefix in an array of strings : "<<prefix<<endl;
    return 0;
}