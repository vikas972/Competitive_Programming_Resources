#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	//code
	ll t;
	cin>>t;
	while(t--){
	    ll n,m;
	    cin>>n>>m;
	    map<ll,ll> s;
	    
	    for(ll i=0;i<n;i++){
	        ll num;
	        cin>>num;
	        s[num]++;
	    }
	    	    
	    for(ll i=0;i<m;i++){
	        ll num;
	        cin>>num;
	         s[num]++;
	    }
	    cout<<s.size()<<endl;
	}
	return 0;
}