#include<iostream>
using namespace std;
int main(){
    int n,original,reverse=0;
    cout<<"enter the number";
    cin>>n;
    original=n;
    while(n>0){
        int digit=n%10;
        reverse=reverse*10+digit;
        n/=10;

    }
    if(original==reverse){
        cout<<original<<" is a palindrome";
    }
    else{
        cout<<original<<" is not palindrome!!!";
    }
    return 0;
}