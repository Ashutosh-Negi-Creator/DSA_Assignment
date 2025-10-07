/*
Q8. The Royal Diagonal
In a royal hall represented as a square, find sum of both diagonals.
Input:
3 3
1 2 3
4 5 6
7 8 9
Output: 1+5+9=15, 3+5+7=15
*/
#include<iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[105][105];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    
    int diag1 = 0, diag2 = 0;
    for(int i = 0; i < n; i++) {
        diag1 += arr[i][i];
        diag2 += arr[i][n - 1 - i];
    }
    
    cout << diag1 << ", " << diag2 << endl;
    return 0;
}
