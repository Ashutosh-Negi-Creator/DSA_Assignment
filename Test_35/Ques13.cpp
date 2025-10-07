// Q13. The Sorcerers Spell
// Reverse a string using recursion.
// Input abc
// Output cba

#include<iostream>
using namespace std;

void rev(string s, int i){
  if(i < 0) return;
  cout << s[i];
  rev(s, i - 1);
}

int main(){
  string s;
  cin >> s;
  rev(s, s.length() - 1);
  return 0;
}
