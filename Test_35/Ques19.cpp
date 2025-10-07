/*
Q19. The Archers Range
Find the first occurrence of an arrows distance.
Input arr1,2,2,2,3, key2
Output 1
*/

#include<iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int key) {
    int left = 0;
    int right = n - 1;
    int result = -1;
    
    while(left <= right) {
        int mid = left + (right - left) / 2;
        
        if(arr[mid] == key) {
            result = mid;
            right = mid - 1;
        }
        else if(arr[mid] < key) {
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
    int key;
    cin >> key;
    
    cout << firstOccurrence(arr, n, key);
    
    return 0;
}
