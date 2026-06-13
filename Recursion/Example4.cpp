#include<bits/stdc++.h>
using namespace std;
// sum of number till given numbers
int summer(int n){
    if(n==1){
        return 1;
    }else{
        return (n + summer(n-1));
    }
}

int main(){
    int x;
    cout<<"enter the number: ";
    cin>>x;
    cout<<"the sum till the number is: "<<summer(x);
}