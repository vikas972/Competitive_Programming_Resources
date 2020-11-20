#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long

int main() {
	//code
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll N=100000001;
    bool prime[N];
  
    memset(prime, true, sizeof(prime));
    
	for(ll i=2;i*i<=N;i++){
	    if(prime[i]==true){
	        for(ll j=i*i;j<=N;j+=i){
	            prime[j]=false;
	        }
	    }
	}

	ll cnt=1;
	for(ll i=2;i<=N;i++){
	    if(prime[i]==true && cnt%100==1){
	        cout<<i<<endl;
	    } 
	    if(prime[i]==true){
	        cnt++;
	    }
	    
	}
	return 0;
	
}