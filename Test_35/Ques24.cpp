/*
Q24. The largest element target.
If no such element exists return -1.
Example Array 1, 2, 4, 6, 6, 8, target 5
Floor 4.
Array 1, 2, 4, 6, 6, 8, target 0
Floor -1 no element 0.
*/

#include<iostream>
using namespace std;

int findFloor(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;
    int result = -1;
    
    while(left <= right) {
        int mid = left + (right - left) / 2;
        
        if(arr[mid] <= target) {
            result = arr[mid];
            left = mid + 1;
        }
        else {
            right = mid - 1;
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
    
    cout << findFloor(arr, n, target);
    
    return 0;
}
