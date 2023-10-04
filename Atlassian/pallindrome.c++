#include <bits/stdc++.h>
using namespace std;

static bool comp(string &a,string &b){
    return a.length()<b.length();
}
int main() {
   int n;
   cin>>n;
 
   vector<string> v(n);
   for(int i=0;i<n;i++){
       cin>>v[i];
   }
 
   sort(v.begin(),v.end(),comp);
   unordered_map<char,int> mp;
   for(auto i:v){
       for(auto j:i){
           mp[j]++;
       }
   }
   int odd,even=0;
   vector<bool> vis(26,false);
   for(auto i:v){
       for(auto j:i){
           if(vis[j-'a']){
               continue;
           }else{
               vis[j-'a']=true;
               if(mp[j]%2==0){
                   even+=mp[j];
               }else{
                   even+=(mp[j]-1);
                   odd+=1;
               }
           }
       }
   }
   int res=0;
   for(int i=0;i<v.size();i++){
       if(v[i].size()%2==0){
           if(even>=v[i].size()){
               res++;
               even-=v[i].size();
           }
       }else{
               if(odd>=1){
                   res++;
                   even-=v[i].size()-1;
               }
        }
   }
   cout<<res;
 
    return 0;
}