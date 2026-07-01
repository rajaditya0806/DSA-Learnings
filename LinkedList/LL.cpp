#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    // Constructor 1: When you only have the data (next becomes nullptr by default)
    Node(int data1) {
        data = data1;
        next = nullptr;
    }

    // Constructor 2: When you have both the data and the next node pointer
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
};

int main(){
    vector<int>arr = {2,5,8,7};
    for(int i = 0;i< arr.size();i++){
        Node* y = new Node(arr[i]);
        cout<<"the new memory location is: "<<y<<"\n";
        cout<<"The value is: "<<y->data<<"\n";
    }
    return 0;
}