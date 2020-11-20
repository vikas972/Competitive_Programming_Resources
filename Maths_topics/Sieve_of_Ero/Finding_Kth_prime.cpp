#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define N 100000001
bool prime[N];
ll arr[N];

void calc(){
  for(ll i=2;i*i<=N;i++){
	    if(prime[i]==true){
	        for(ll j=i*i;j<=N;j+=i){
	            prime[j]=false;
	        }
	    }
	}
	ll cnt=1;
	for(ll i=2;i<=N;i++){
	    if(prime[i]==true ){
	       arr[cnt]=i;
	       cnt++;
	    } 
	    
	}
}
int main() {
	//code
	 ios_base::sync_with_stdio(false);
	 cin.tie(NULL);
     ll t;
     cin>>t;
     memset(prime, true, sizeof(prime));
     calc();
     
     while(t--){
         ll n;
         cin>>n;
         cout<<arr[n]<<endl;
     }
  

	return 0;
	
}