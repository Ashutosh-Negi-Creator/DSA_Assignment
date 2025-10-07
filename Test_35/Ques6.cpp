/*
Q6. The Treasure Island
Each island grid has gold. Find the island row with maximum gold.
Input:
3 3
1 2 3
4 5 6
7 8 9
Output: Row 2 sum=24
*/
#include<iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int grid[105][105];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }
    
    int maxRow = 0;
    int maxSum = 0;
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = 0; j < m; j++) {
            sum += grid[i][j];
        }
        if(sum > maxSum) {
            maxSum = sum;
            maxRow = i;
        }
    }
    
    cout << "Row " << maxRow << " sum=" << maxSum << endl;
    return 0;
}
