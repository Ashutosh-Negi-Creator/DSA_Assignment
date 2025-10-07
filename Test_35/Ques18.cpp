// Q18. The Secret Door
// Doors are numbered in increasing order. Find target door using binary search.
// Input arr1,3,5,7,9, key7
// Output 3

#include<iostream>
using namespace std;

int binsearch(int arr[], int n, int key){
  int l = 0, r = n - 1;
  while(l <= r){
    int mid = l + (r - l) / 2;
    if(arr[mid] == key) return mid;
    if(arr[mid] < key) l = mid + 1;
    else r = mid - 1;
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
  cout << binsearch(arr, n, key);
  return 0;
}
