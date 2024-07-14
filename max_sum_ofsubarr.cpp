// 10. Find the maximum sum of a subarray in an array 
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n, elem;
    cout<<"Enter number of elements:";
    cin>>n;
    int arr[n];
    
    for (int i=0; i<n; i++){
        cout<<"Enter element:";
        cin>>elem;
        arr[i] = elem;
    }
    
    // using kadane's algorithm gives optimal solution
    int max, sum, start, subarr_start = -1, subarr_end = -1;
    max = INT_MIN;
    sum = 0;
    for (int i=0; i<n; i++){
        sum += arr[i];
        if (sum == 0){
            start = i;
        }
        if (sum < 0){
            sum = 0;
        }
        if (max < sum){
            max = sum;
            subarr_start = start;
            subarr_end = i;
        }
    }
    cout<<endl<<"Maximum sum of subarray = "<<max<<endl;
    
    cout<<"Sub Array : ";
    for (int i=subarr_start; i<=subarr_end; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}