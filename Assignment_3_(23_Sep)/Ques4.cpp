// REVERSE THE STRING

#include<iostream>
using namespace std;


int reverse(string s, int size){
    
    if(size==0){
        cout<< s[0];
        return s[0];
    }
    cout<<s[size];
    reverse(s,size-1);
    

}
int main(){
    string n;
    cout<<"Enter a String"<<endl;
    cin>>n;
    int size=n.size();
    reverse(n,size);

    return 0;
}
