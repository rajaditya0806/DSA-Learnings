// to check palindrome
#include <iostream>
#include <string>

using namespace std;
string str = "adida";

bool palindrome(int i){
    
    if(i >= str.size() / 2){
        return true;
    }
    
    if(str[i] != str[str.size() - i - 1]){
        return false;
    }
    return palindrome(i + 1);    

}
int main(){
    cout<<palindrome(0);
    return 0;
}