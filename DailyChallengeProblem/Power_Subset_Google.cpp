#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> a;
	    for(int i=0;i<n;i++){
	        int num;
	        cin>>num;
	        a.push_back(num);
	        
	    }
	    int p=pow(2,n);
	    vector<vector<int>> v;
	    for(int i=0;i<p;i++){
	        vector<int> sub;
	        for(int j=0;j<n;j++){
	            if(i & (1<<j)){
	                sub.push_back(a[j]);
	               // cout<<(i&(1<<j))<<" ";
	            }
	        }
	        v.push_back(sub);
	       // cout<<endl;
	       
	    }
	    
    for(int i=0;i<v.size();i++){
	        for(int j=0;j<v[i].size();j++){
	            cout<<v[i][j]<<" ";
	        }
	        cout<<endl;
	    }

	      
	}
	
	return 0;
}