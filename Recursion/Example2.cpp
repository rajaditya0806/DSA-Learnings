#include <bits/stdc++.h>
using namespace std;

// Function to print from target down to 0
void numbercheck(int current) {
    if (current < 0) {
        return;
    }
    
    cout << current << endl;
    
    numbercheck(current - 1);
}

int main() {
    int target;
    cout << "Enter target: ";
    cin >> target;
    
    numbercheck(target);
    
    return 0;
}
