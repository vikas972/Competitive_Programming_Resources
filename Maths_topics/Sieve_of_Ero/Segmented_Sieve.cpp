#include <bits/stdc++.h>
using namespace std;
#define ll long long


void simpleSieve(vector<ll> &prime,ll limit,vector<ll> &ans){
    bool mark[limit+1];
    memset(mark,true,sizeof(mark));
    
    for(ll i=2;i*i<limit;i++){
        if(mark[i]==true){
            for(ll j=i*i;j<limit;j+=i){
                mark[j]=false;
            }
        }
    }
    
    for(ll i=2;i<limit;i++){
        if(mark[i]==true){
            prime.push_back(i);
            ans.push_back(i);
        }
    }
}

void segmentedSieve(ll n,vector<ll> &ans){
    
    ll limit=floor(sqrt(n))+1;
    vector<ll> prime;
    
    simpleSieve(prime,limit,ans);
   
    
    int low=limit;
    int high=2*limit;
    
    while(low<n){
        
        if(high>n){high=n;}
        
        bool mark[limit+1];
        memset(mark,true,sizeof(mark));
        
        for(ll i=0;i<prime.size();i++){
            
            ll loLim=floor(low/prime[i])*prime[i];
            
            if(loLim<low){loLim+=prime[i];}
            
            for(ll j=loLim;j<high;j+=prime[i]){
                mark[j-low]=false;
            }
       }
       
    for (ll i = low; i<high; i++){
            if (mark[i - low] == true){
                ans.push_back(i);
            }
        }
            
            low+=limit;
            high+=limit;
    }
}

int main(){
    ll n=500000000;
    vector<ll> ans;
    segmentedSieve(n,ans);
    int t;
    cin>>t;
    while(t--){
        ll num;
        cin>>num;
        cout<<ans[num-1]<<endl;
        
    }
    //cout<<sqrt(n)<<endl;
    return 0;
}
