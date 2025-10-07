/*
Q10. The Rainwater Pond
Count the number of water ponds in a village (1=water, 0=land).
Input:
3 3
1 0 1
0 1 0
1 0 1
Output: 5
*/
#include<iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[105][105];
    int count = 0;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if(arr[i][j] == 1) {
                count++;
            }
        }
    }
    
    cout << count << endl;
    return 0;
}
