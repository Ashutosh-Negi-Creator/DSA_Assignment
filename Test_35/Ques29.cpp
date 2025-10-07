/*
Q29. The Hidden Scrolls Staircase Search
The King hides scrolls in a 2D matrix where rows and columns are sorted.
Find if a scroll with ID x exists.
Use Onm method start from top-right corner.
Input matrix 1,4,7,11, 2,5,8,12, 3,6,9,16, 10,13,14,17 target 6
Output True
Constraints 1 n,m 1000
*/

#include<iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int matrix[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    int target;
    cin >> target;
    
    int i = 0;
    int j = m - 1;
    int found = 0;
    
    while(i < n && j >= 0) {
        if(matrix[i][j] == target) {
            found = 1;
            break;
        }
        else if(matrix[i][j] > target) {
            j--;
        }
        else {
            i++;
        }
    }
    
    if(found) cout << "True";
    else cout << "False";
    
    return 0;
}
