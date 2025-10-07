/*
Q23. The smallest element target actual value, not index.
If no such element exists return -1.
Example Array 1, 2, 4, 6, 6, 8, target 5
Ceil 6.
Array 1, 2, 4, 6, 6, 8, target 9
Ceil -1 no element 9.
*/

#include<iostream>
using namespace std;

int findCeil(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;
    int result = -1;
    
    while(left <= right) {
        int mid = left + (right - left) / 2;
        
        if(arr[mid] >= target) {
            result = arr[mid];
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
    
    cout << findCeil(arr, n, target);
    
    return 0;
}
