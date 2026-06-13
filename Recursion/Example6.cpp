#include<vector>
#include<iostream>
using namespace std;

// swapping the array using just ONE POINTER
vector<int> arr = {1, 3, 2, 5, 4};
int n = arr.size();

void func(int x){
    if(x>=n/2)return;
    swap(arr[x], arr[n-x-1]);
    x++;
    func(x);
}

int main(){
    int i = 0;
    
    while(i < arr.size()){
        cout << arr[i++] << "\t";
    }
    cout << endl;    
    
    func(0);

    i = 0; 
    
    while(i < arr.size()){
        cout << arr[i++] << "\t";
    }
    cout << endl;
    
    return 0;
}