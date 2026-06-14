#include<bits/stdc++.h>
using namespace std;

//for small-case letters only

int main(){
    string str;
    cin>>str;

    // precompute
    int hash[26] = {0};
    for(int i=0;i<str.size();i++){
        hash[str[i]-'a']+=1;
    }
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        //fetch
        cout<<hash[c-'a']<<endl;
    }
    return 0;


}