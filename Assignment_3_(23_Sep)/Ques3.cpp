// Sum of N numbers By Recursion

#include<iostream>
using namespace std;

int sum(int n){
    if(n==1){
        return 1;
    }
    int SUM=n+sum(n-1);
    return SUM;
}
int main(){
    int n;
    cout<<"Enter a number :-"<<endl;
    cin>>n;
    cout<<sum(n);
    return 0;
}
