/*
Q1. The King's Feast
The King has n plates of food, each with a certain quantity. He wants to know the maximum food plate.
Input: n=5, arr=[2,7,1,9,5]
Output: 9
Constraints: 1 ≤ n ≤ 10^5, -10^9 ≤ arr[i] ≤ 10^9
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter number of plates: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter quantities: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int maxFood = *max_element(arr.begin(), arr.end());
    cout << "Maximum food plate: " << maxFood << endl;
    
    return 0;
}
