Question Link: https://www.desiqna.in/16088/nutanix-oa-sde1-ctc-54-lac


Brute Force Approach : Find all permutations and find difference but it is of O(s.length)!

//code for finding permutation:

#include <bits/stdc++.h>
using namespace std;
void help(string s,string output,vector<string> &v){
    if(s.length()==0){
        v.push_back(output);
        return;
    }
    for(int i=0;i<s.length();i++){
        help(s.substr(0,i)+s.substr(i+1),output+s[i],v);
    }
    
}
int main() {
    //print all permutation
    string s;
    cin>>s;
    vector<string> v;
    string output="";
    help(s,output,v);
    
    for(auto i:v){
        cout<<i<<endl;
    }
    return 0;
}

Greedy Approach : If we sort the message char according to their secuirty values in ascending order /descending order both will work ,we will able to minimise the sum.