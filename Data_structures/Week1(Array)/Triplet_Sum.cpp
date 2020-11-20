#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int flag=0;
	    sort(arr,arr+n);
	    for(int i=0;i<n-2;i++){
	        
	        int l=i+1;
	        int r=n-1;
	        while(l<r){
	            if((arr[i]+arr[l]+arr[r])==k){
	                flag=1;
	                break;
	            }else if((arr[i]+arr[l]+arr[r])<k){
	                l++;
	            }else{
	                r--;
	            }
	        }
	    }
	    
	    
	    if(flag){
	        cout<<"1"<<endl;
	    }else{
	        cout<<"0"<<endl;
	    }
	}
	return 0;
}