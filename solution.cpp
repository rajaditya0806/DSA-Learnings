#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
using namespace std;

int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        cout<<"print the value of arr["<<i<<"]";
        cin>>arr[i];
    }
    //leader is a number that is greater than all the members to it's right.
    //special leader if it is greatest  among all
    //print all the leader and special leaders.
    int max1 = INT16_MIN;
    
    for(int i=0;i<10;i++){
        max1 = max(max1, arr[i]);
    }
    cout<<" special leader is "<<max1<<endl;
    int leader[10];
    int p=0;
    // int leader = arr[0];
    for(int i=0;i<10-1;i++){
        bool isLeader = true;
        for(int j=i+1;j<10;j++){
            if(arr[i]<arr[j]){
                isLeader = false;
                break;
            }
        }
        if(isLeader){
            leader[p]=arr[i];
            p++;
        }

    }
    cout<<"the leaders are: ";
    for(int i=0;i<p;i++){
        cout<<leader[i]<<endl;
    }

    return 0;
}