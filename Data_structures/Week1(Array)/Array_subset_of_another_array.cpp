#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>m>>n;
	    vector<int> a,s;
	    for(int i=0;i<m;i++){
	        int num;
	        cin>>num;
	        a.push_back(num);
	        
	    }
	    for(int i=0;i<n;i++){
	        int num;
	        cin>>num;
	        s.push_back(num);
	       }
	       int flag=1;
	       for(int i=0;i<n;i++){
	           if(find(a.begin(),a.end(),s[i])==a.end()){
	               flag=0;
	               break;
	           }
	       }
	       if(flag){
	           cout<<"Yes"<<endl;
	       }else{
	           cout<<"No"<<endl;
	       }
	}
	
	return 0;
}