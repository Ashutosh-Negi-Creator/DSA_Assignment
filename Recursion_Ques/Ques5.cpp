/*
Question: Calculate the nth Fibonacci number using iterative method.
*/

#include <iostream>
using namespace std;

int fib(int n) {
    if (n == 0 || n == 1) return n;
    int a = 0, b = 1, c = 0;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main() {
    int n;
    cin >> n;
    cout << fib(n);
    return 0;
}
