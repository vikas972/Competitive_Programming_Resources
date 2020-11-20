#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    vector<int> v;
	    for(int i=0;i<n;i++){
	        int num;
	        cin>>num;
	        v.push_back(num);
	    }
	    int ind=INT_MAX;
	    for(int i=0;i<n;i++){
	        int sum=0;
	        int c=0;
	        for(int j=i;j<n;j++){
	            
	            sum+=v[j];
	            c++;
	            if(sum>x){
	                ind=min(c,ind);
	                break;
	            }
	        }
	    }
	    cout<<ind<<endl;
	}
	return 0;
}