//nth fibonacci number
#include<bits/stdc++.h>
using namespace std;
int n;

long long fib(int a){
    if(a==0)return 0;
    if(a==1)return 1;

    return fib(a-1)+fib(a-2);
}
int main(){
    cout<<"enter the value of n: ";
    cin>>n;
    cout<<"the nth fibonacci number is: "<<fib(n); 
    return 0;
}