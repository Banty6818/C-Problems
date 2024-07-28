// Rotating the matrix by 90 degree anticlockwise
#include <iostream>
using namespace std;

int main() {
    int n, elem;
    cout<<"Enter number:";
    cin>>n;
    
    int arr[n][n];
    // inputing the matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"Enter element:";
            cin>>elem;
            arr[i][j] = elem;
        }
    }
    
    // transpose the matrix
    int trans[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            trans[i][j] = arr[j][i];
        }
    }
    
    // reversing the matrix
    for(int i=0; i<n/2; i++){
        for(int j=0; j<n; j++){
            int temp = trans[i][j];
            trans[i][j] = trans[n-i-1][j];
            trans[n-i-1][j] = temp;
        }
    }
    
    // displaying reversed matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}