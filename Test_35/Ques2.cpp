/*
Q2. The Lost Soldier
In the battlefield, soldiers are numbered 0...n. One soldier is missing. Find him.
Input: n=5, arr=[0,1,2,4,5]
Output: 3
Constraints: O(n) or O(log n) solution required.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter soldiers: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Using sum formula: sum of 0 to n = n*(n+1)/2
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;
    
    for(int i = 0; i < n; i++) {
        actualSum += arr[i];
    }
    
    int missing = expectedSum - actualSum;
    cout << "Missing soldier: " << missing << endl;
    
    return 0;
}
