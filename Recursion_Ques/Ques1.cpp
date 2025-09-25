// PRINT 2 RAISED TO POWER N SERIES 

#include <iostream>
#include <cmath>
using namespace std;

double powTwo(int n) {
    if (n == 0) return 1;
    return pow(2, n) + powTwo(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << powTwo(n);
    return 0;
}
