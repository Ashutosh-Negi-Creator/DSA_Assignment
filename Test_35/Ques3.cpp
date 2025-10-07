/*
Q3. Potion Mixing (Two Sum)
A wizard wants to mix two potions whose strengths add up to target.
Input: n=4, arr=[3,2,4,7], target=6
Output: Indices 1,2
Constraints: 1 ≤ n ≤ 10^5, -10^9 ≤ arr[i] ≤ 10^9
*/
#include<iostream>
using namespace std;

int main() {
    int n, target;
    cin >> n;
    int arr[100005];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> target;
    
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                cout << "Indices: " << i << "," << j << endl;
                return 0;
            }
        }
    }
    
    cout << "No solution found" << endl;
    return 0;
}
