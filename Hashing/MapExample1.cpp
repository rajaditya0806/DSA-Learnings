#include<bits/stdc++.h>
using namespace std;

int main(){
    // to find the maximum and minimum elemnet in an unordered map
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //pre compute
    unordered_map<int, int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]+=1;
    }
    int max1 = INT16_MIN;
    int key;
    for(auto it: mp){
        if(max1<it.second){
            key = it.first;
            max1 = it.second;
        }
    }
    cout<<"the maximum appearing value is: "<<key <<" -> "<<max1;
    return 0;


}