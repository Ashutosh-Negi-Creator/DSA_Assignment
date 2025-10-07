/*
Q21. The first index where the element is greater than or equal to the target.
If element is found return its first occurrence.
If not found return position where it can be inserted.
If not possible return n array size.
Example Array 1, 2, 4, 6, 6, 8, target 6
Lower bound index 3 first 6.
Array 1, 2, 4, 6, 6, 8, target 5
Lower bound index 3 as 6 is the first 5.
*/

#include<iostream>
using namespace std;

int lowerBound(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;
    int result = n;
    
    while(left <= right) {
        int mid = left + (right - left) / 2;
        
        if(arr[mid] >= target) {
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
    
    cout << lowerBound(arr, n, target);
    
    return 0;
}
