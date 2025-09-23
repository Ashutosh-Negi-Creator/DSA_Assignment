// PRINT N TO 1 BY RECURSION

#include<iostream>
using namespace std;

int Print(int n){
    if(n==0){
        return 1;
    } 
    cout<<n<<" ";
    Print(n-1);
    
}

int main(){
    int n;
    cout<<"Enter a number :-"<<endl;
    cin>>n;
    Print(n);
    return 0;
}
