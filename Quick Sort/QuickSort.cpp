#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>&arr, int low,int high){
    int pivot = arr[low];
    int i=low, j = high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j++;
        }

        if(i<j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;

}

void quickSort(vector<int>&arr, int low, int high){
    if(low<high){
        int partitionIndex = partition(arr, low, high);
        quickSort(arr, low, partitionIndex-1);
        quickSort(arr, partitionIndex+1, high);
    }
}

int main() {
    // Sample array
    vector<int> arr = {10, 7, 8, 9, 1, 5};


    // Apply quicksort
    quickSort(arr, 0, arr.size() - 1);

    // Print sorted array
    for (int num : arr)
        cout << num << " ";
    
    return 0;
}