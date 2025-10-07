/*
Q5. The King's Parade
Soldiers stand in line. Check if their heights are sorted in non-decreasing order.
Input: arr=[1,3,5,7]
Output: true
Input: arr=[3,2,1]
Output: false
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[1005];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int sorted = 1;
    for(int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            sorted = 0;
            break;
        }
    }
    
    if(sorted) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}
