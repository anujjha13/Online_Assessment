#include <bits/stdc++.h>
using namespace std;
vector<int> values(26);
static bool comp(char &a,char &b){
    return values[a-'a']<values[b-'a'];
}
int calc(string &msg){
    int res=0;
    for(int i=1;i<msg.length();i++){
        res+=abs(values[msg[i]-'a']-values[msg[i-1]-'a']);
    }
    return res;
}
int main() {
    //print all permutation
    
    for(int i=0;i<26;i++){
        cin>>values[i];
    }
    string msg;
    cin>>msg;
    
    sort(msg.begin(),msg.end(),comp);
    cout<<calc(msg);
    return 0;
}