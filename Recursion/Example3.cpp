#include <bits/stdc++.h>
using namespace std;

// sum of first m terms
int current = 0;
int sum = 0;

int sum1(int target){
    sum += current;
    current++;
    if(current>target){
        return sum;        
    }else{
        sum1(target);
    }
}

int main(){
    int target;
    cout<<"enter target: ";
    cin>>target;
    cout<< sum1(target);
    return 0;




}