/*
Q1. The King's Feast
The King has n plates of food, each with a certain quantity. He wants to know the maximum food plate.
Input: n=5, arr=[2,7,1,9,5]
Output: 9
Constraints: 1 ≤ n ≤ 10^5, -10^9 ≤ arr[i] ≤ 10^9
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100005];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int maxFood = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > maxFood) {
            maxFood = arr[i];
        }
    }
    
    cout << maxFood << endl;
    return 0;
}
