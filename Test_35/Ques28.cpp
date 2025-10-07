/*
Q28. The Queens Jewels Binary Search First Occurrence
The Queens jewels are stored in a 2D sorted grid.
She wants to find the first position of a jewel type x.
Input matrix 1,2,2, 3,4,4, 5,6,7 target 4
Output 1,1
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
    
    int r = -1, c = -1;
    for(int i = 0; i < n && r == -1; i++) {
        for(int j = 0; j < m; j++) {
            if(matrix[i][j] == target) {
                r = i;
                c = j;
                break;
            }
        }
    }
    
    cout << r << "," << c;
    
    return 0;
}
