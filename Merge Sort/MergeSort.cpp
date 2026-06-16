#include<bits/stdc++.h>
using namespace std;

//algorithm to merge both the arrays
void merge(vector<int>&arr, int low, int mid, int high){
    // create temp arrays
    vector<int>temp;
    int left = low, right = mid+1;

    //merge two sorted arrays
    while(left<=mid && right <= high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    // copy remaining values
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    //makes changes in the actual array arr from the temporary array
    for(int i=low;i<=high;i++){
        arr[i] = temp[i-low];
    }
}

// Recursive merge sort function
void mergeSort(vector<int>&arr, int low, int high){
    if(low>=high){
        return;
    }

    //finding the middle index
    int mid = (low+high)/2;

    //recursive sort left
    mergeSort(arr, low, mid);

    //recursive sort right
    mergeSort(arr, mid+1, high);

    //merge both the array
    merge(arr, low, mid, high);
}

int main(){
    vector<int>arr = {1211,5,2,8,4,1, 12, 0};
    cout<<"before sorting: ";
    for(auto x: arr){
        cout<<x<<"\t";
    }
    cout<<endl;
    mergeSort(arr, 0, arr.size()-1);
    cout<<"after sorting: ";
    for(auto x: arr){
        cout<<x<<"\t";
    }
    cout<<endl;
    return 0;
}