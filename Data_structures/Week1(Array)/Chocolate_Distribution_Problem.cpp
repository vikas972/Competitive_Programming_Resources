#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int m;
	    cin>>m;
	    
	    sort(a,a+n);
	    
	    int dif=INT_MAX;
	    
	    for(int i=0;i<=n-m;i++){
	      dif=min(a[i+m-1]-a[i],dif);
	     }
	    cout<<dif<<endl;
	}
	return 0;
}