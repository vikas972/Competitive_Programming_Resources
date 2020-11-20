#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s1,s2;
	    cin>>s1>>s2;
	    string temp=s1+s1;
	    cout<<temp<<endl;
	    int len;
	    int maxl=0;
	    for(int i=0;i<=s1.length();i++){
	        len=0;
	        for(int j=0;j<s2.length();j++){
	            if(s2[j]!=temp[j+i]){
	                break;
	            }
	            len++;
	        }
	        maxl=max(maxl,len);
	    }
	    if(maxl==s1.length()){
	        cout<<1<<endl;
	    }else{
	        cout<<0<<endl;
	    }
	}
	return 0;
}
