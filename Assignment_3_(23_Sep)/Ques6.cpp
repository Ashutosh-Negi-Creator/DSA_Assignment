// NUMBER OF DIFFERENT WAYS TO REACH THE TOP USING RECUSRION
// +1 SHIFTED FIBONACCI SEQUENCE


#include<iostream>
using namespace std;

int steps(int n){
    if(n==0 || n==1) return 1;
    return steps(n-1)+steps(n-2);
}
int main(){
    int n;
    cout<<"Enter the number of steps :-"<<endl;
    cin>>n;
    cout<<steps(n);
    return 0;
}
