#include<iostream>
#include<vector>

using namespace std;

// reversing an array using recursion using TWO POINTERS
vector<int> arr = {1, 3, 2, 5, 4};

void func(int l, int r){
    if(l >= r){
        return;
    }
    swap(arr[l], arr[r]);
    func(l+1, r-1);
}

int main(){
    int i = 0;
    
    while(i < arr.size()){
        cout << arr[i++] << "\t";
    }
    cout << endl;    
    
    // FIX 1: Pass arr.size() - 1 to get the correct last index
    func(0, arr.size() - 1);

    // FIX 2: Reset i to 0 before trying to print again
    i = 0; 
    
    // Print reversed array
    while(i < arr.size()){
        cout << arr[i++] << "\t";
    }
    cout << endl;
    
    return 0;
}