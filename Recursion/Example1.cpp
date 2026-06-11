// print a name using recursion
#include<bits/stdc++.h>
using namespace std;


int targetLimit;
int currenttargetLimit = 0; // Initialize to 0 explicitly

void printing(){
    if(currenttargetLimit >= targetLimit){
        return;
    }
    
    cout << "name" << endl;
    currenttargetLimit++; // Fix: Increment progress, NOT the limit
    printing();
}


int main(){
    cout<<"enter the number of times you want to print: ";
    
    cin>>targetLimit;
    printing();
    
    return 0;

}