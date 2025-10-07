// Q17. The Farmers Basket
// Find if a fruit number exists in the basket.
// Input arr10,20,30, key25
// Output -1

#include<iostream>
using namespace std;

int search(int arr[], int n, int key){
  for(int i = 0; i < n; i++){
    if(arr[i] == key) return i;
  }
  return -1;
}

int main(){
  int n, key;
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  cin >> key;
  cout << search(arr, n, key);
  return 0;
}
