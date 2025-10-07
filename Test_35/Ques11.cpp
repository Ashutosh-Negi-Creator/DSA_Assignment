// Q11. Tower of Temples Hanoi
// Temples have n golden disks. Move them from source destination using helper temple. Return moves.
// Input n3
// Output 7

#include<iostream>
using namespace std;

int hanoi(int n){
  if(n == 1) return 1;
  return 2 * hanoi(n - 1) + 1;
}

int main(){
  int n;
  cin >> n;
  cout << hanoi(n);
  return 0;
}
