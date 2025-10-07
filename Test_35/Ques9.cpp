/*
Q9. The Messenger's Path
A messenger wants to go from (0,0) to (n-1,m-1). Cells with 1 are blocked. Can he reach?
Input:
3 3
0 0 0
0 1 0
0 0 0
Output: true
*/
#include<iostream>
using namespace std;

int visited[105][105];
int arr[105][105];
int n, m;

int dfs(int i, int j) {
    if(i < 0 || i >= n || j < 0 || j >= m) return 0;
    if(arr[i][j] == 1 || visited[i][j]) return 0;
    if(i == n-1 && j == m-1) return 1;
    visited[i][j] = 1;
    if(dfs(i+1, j) || dfs(i, j+1) || dfs(i-1, j) || dfs(i, j-1)) return 1;
    return 0;
}

int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
            visited[i][j] = 0;
        }
    }
    
    if(dfs(0, 0)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}
