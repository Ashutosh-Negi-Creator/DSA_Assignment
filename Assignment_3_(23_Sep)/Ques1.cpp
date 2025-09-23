// PRINT 1 TO N BY RECURSION

#include<iostream>
using namespace std;

int beats(int n){
    if(n==0) return 1;
    beats(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cout<<"Enter total beats :-"<<endl;
    cin>>n;
    beats(n);
    return 0;
}
