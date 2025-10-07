/*
Q27. The Battle Formation Binary Search - Flattened
Soldiers stand in a grid formation. Their strengths are sorted row-wise
and the first element of each row is greater than the last of the previous row.
The commander wants to know if a soldier with strength x exists.
Input matrix 1,3,5, 7,10,11, 16,20,30 target 10
Output True
Constraints 1 n,m 300
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
    
    int left = 0;
    int right = n * m - 1;
    int found = 0;
    
    while(left <= right) {
        int mid = left + (right - left) / 2;
        int row = mid / m;
        int col = mid % m;
        
        if(matrix[row][col] == target) {
            found = 1;
            break;
        }
        else if(matrix[row][col] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    
    if(found) cout << "True";
    else cout << "False";
    
    return 0;
}
