/*
Q4. The Secret Message
A spy wrote a secret message as numbers. To decode it, reverse the array.
Input: arr=[1,2,3,4]
Output: 4,3,2,1
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
    
    for(int i = n - 1; i >= 0; i--) {
        cout << arr[i];
        if(i > 0) cout << ",";
    }
    cout << endl;
    return 0;
}
