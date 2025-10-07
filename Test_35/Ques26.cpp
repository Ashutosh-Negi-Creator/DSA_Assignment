/*
Q26. The Magical Scrolls Linear Search Return Index
In the royal library, scrolls are arranged in a 2D cabinet of size n x m.
Find the row and column of the scroll with ID target.
If not found, return -1,-1.
Input matrix 10,20,30, 40,50,60, 70,80,90
target 60
Output 1,2
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
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(matrix[i][j] == target) {
                r = i;
                c = j;
                break;
            }
        }
        if(r != -1) break;
    }
    
    cout << r << "," << c;
    
    return 0;
}
