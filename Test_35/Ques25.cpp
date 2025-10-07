/*
Q25. The Treasure Map Linear Search
A treasure map is represented as a grid n x m. Each cell contains a number.
The King wants to know if the treasure target exists on the map.
Input n3, m3 matrix 1,2,3, 4,5,6, 7,8,9 target 5
Output Yes
Constraints 1 n,m 500, -106 matrixij 106
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
    
    int found = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(matrix[i][j] == target) {
                found = 1;
                break;
            }
        }
        if(found) break;
    }
    
    if(found) cout << "Yes";
    else cout << "No";
    
    return 0;
}
