#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> v;
	    for(int i=0;i<n;i++){
	        int num;
	        cin>>num;
	        v.push_back(num);
	    }
	    int temp=v[n-1];
	    for(int i=0;i<n;i++){
	        swap(v[0],v[i]);
	    }
	    v[0]=temp;
	    
	    for(int i=0;i<n;i++){
	        cout<<v[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}