// SUM OF ARRAY BY RECURSION

#include<iostream>
using namespace std;

int Count(int arr[], int size){
    if(size==1){
        return arr[0];
    }
    int count= arr[size-1] + Count(arr,size-1);
    return count;
}
int main(){
    cout<<"Enter total number of boxes :"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter number of coins in each box"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<Count(arr,n);
    return 0;
}
