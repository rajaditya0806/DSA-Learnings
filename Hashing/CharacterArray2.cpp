#include<bits/stdc++.h>
using namespace std;

//for upper-case letters only

int main(){
    string str;
    cin>>str;

    // precompute
    int hash[26] = {0};
    for(int i=0;i<str.size();i++){
        hash[str[i]-'A']+=1;
    }
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        //fetch
        cout<<hash[c-'A']<<endl;
    }
    return 0;


}