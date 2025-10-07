// Q15. The Hidden Chamber
// Find sum of array elements using recursion.
// Input arr1,2,3,4
// Output 10

#include<iostream>
using namespace std;

int sum(int arr[], int n){
  if(n == 0) return 0;
  return arr[n - 1] + sum(arr, n - 1);
}

int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  cout << sum(arr, n);
  return 0;
}
