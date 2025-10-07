// Q12. The Magical Staircase
// A child climbs 1 or 2 steps. Find number of ways to reach step n.
// Input n4
// Output 5

#include<iostream>
using namespace std;

int stairs(int n){
  if(n == 0) return 1;
  if(n == 1) return 1;
  return stairs(n - 1) + stairs(n - 2);
}

int main(){
  int n;
  cin >> n;
  cout << stairs(n);
  return 0;
}
