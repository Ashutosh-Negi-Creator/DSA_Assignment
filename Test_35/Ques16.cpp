// Q16. The Ancient Scroll
// Search for a scroll ID in the archive.
// Input arr2,5,7,8, key7
// Output 2

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
