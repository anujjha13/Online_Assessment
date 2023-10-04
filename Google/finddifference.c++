#include <bits/stdc++.h>
using namespace std;

int main() {
    //print all permutation
    int N,P;
    cin>>N>>P;
    vector<int> v(N,0);
    for(int i=0;i<N;i++){
        cin>>v[i];
    }
    
    sort(v.begin(),v.end());
    
    int start=0,end=P-1;
    int minsum=INT_MAX;
    while(end<v.size()){
        minsum=min(minsum,v[end]-v[start]);
        start++;
        end++;
    }
    
    cout<<minsum;
    return 0;
}