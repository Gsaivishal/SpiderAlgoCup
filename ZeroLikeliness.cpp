#include<bits/stdc++.h>
using namespace std;


long long int mod=10e9+7;

int main() {
    
    int n,t;
    cin>>n;
    vector<long long int> a;
    unordered_map<long long int,long long int> map;
    long long int count,max=0;
    for(int i=0;i<n;i++){
        cin>>t;
        a.push_back(t);
        if(i!=0) a[i]+=a[i-1];
        map[a[i]]++;
        if(a[i]==0) max++;
    }
    
    for(auto it=map.begin();it!=map.end();++it){
        count=it->second;
        count=(count*(count-1))/2;
        count=count%mod;
        max+=count;
        max=max%mod;
    }       
    cout<<max; 
    return 0;  
}
