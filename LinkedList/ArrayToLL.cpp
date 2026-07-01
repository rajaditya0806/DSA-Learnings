#include<bits/stdc++.h>
using namespace std;

class Node{
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

Node* convertArr2LL(vector<int>& arr) {
    // Edge case: if the array is empty, return null
    if (arr.empty()) return nullptr;
    
    Node* head = new Node(arr[0]);
    Node* mover = head;
    
    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp; // 1. Link the current node to the new node
        mover = temp;       // 2. Move the 'mover' to the new node
    }
    
    return head;
}

int main(){
    vector<int>arr = {2,5,8,7};
    Node* head = convertArr2LL(arr);
    cout<<head->data;
    return 0;
}