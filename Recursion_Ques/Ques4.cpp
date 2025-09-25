/*
Question: Write recursive functions to find the maximum and minimum elements in an array.
*/

#include <iostream>
#include <algorithm>
using namespace std;

int max(int arr[], int n) {
    if (n == 1) return arr[0];
    return std::max(arr[n-1], max(arr, n-1));
}

int min(int arr[], int n) {
    if (n == 1) return arr[0];
    return std::min(arr[n-1], min(arr, n-1));
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << max(arr, n) << endl;
    cout << min(arr, n) << endl;
    
    return 0;
}
