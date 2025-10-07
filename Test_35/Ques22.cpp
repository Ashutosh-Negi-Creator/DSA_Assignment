/*
Q22. The first index where the element is strictly greater than the target.
If all elements target return n.
Example Array 1, 2, 4, 6, 6, 8, target 6
Upper bound index 5 first element greater than 6 is 8.
Array 1, 2, 4, 6, 6, 8, target 7
Upper bound index 5 8 is first 7.
*/

#include<iostream>
using namespace std;

int upperBound(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;
    int result = n;
    
    while(left <= right) {
        int mid = left + (right - left) / 2;
        
        if(arr[mid] > target) {
            result = mid;
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    
    cout << upperBound(arr, n, target);
    
    return 0;
}
