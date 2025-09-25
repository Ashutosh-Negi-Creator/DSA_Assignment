// Write a program to find the sum of squares of first n natural numbers using recursion.

#include <iostream>
using namespace std;

int sumSq(int n) {
    if (n == 0) return 0;
    return (n * n) + sumSq(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << sumSq(n);
    return 0;
}
