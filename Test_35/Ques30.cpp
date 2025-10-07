/*
Q30. The Magic Portal Binary Search 2D
A wizard created portals in a 2D grid sorted in ascending order row-wise and column-wise.
To activate a portal, he must find a specific number x.
Return Activated if found else Failed.
Input matrix 1, 2, 8, 3, 6, 10, 7, 9, 12 target 9
Output Activated
Constraints 1 n,m 500
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
    
    if(found) cout << "Activated";
    else cout << "Failed";
    
    return 0;
}
