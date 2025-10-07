// Q14. The Dragons Roar
// Print numbers 1 to n using recursion.
// Input n5
// Output 1 2 3 4 5

#include<iostream>
using namespace std;

void print(int i, int n){
  if(i > n) return;
  cout << i << " ";
  print(i + 1, n);
}

int main(){
  int n;
  cin >> n;
  print(1, n);
  return 0;
}
