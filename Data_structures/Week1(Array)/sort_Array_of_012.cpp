#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    map<int,int> mp;
	    for(int i=0;i<n;i++){
	        int num;
	        cin>>num;
	        mp[num]++;
	    }
	    
	    for(int i=0;i<mp[0];i++){
	        cout<<"0"<<" ";
	    }
	    for(int i=0;i<mp[1];i++){
	        cout<<"1"<<" ";
	    }
	    for(int i=0;i<mp[2];i++){
	        cout<<"2"<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}