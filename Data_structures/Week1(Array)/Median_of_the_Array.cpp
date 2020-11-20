#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    // Code here.
		    sort(v.begin(),v.end());
		    int od_ev=v.size()%2;
		    int ind=v.size()/2;
		    if(od_ev !=0){
		        return v[ind];
		    }else{
		        return (v[ind]+v[ind-1])/2 ;
		    }
		}
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(n);
    	for(int i = 0; i < n; i++)
    		cin>>v[i];
    	Solution ob;
    	int ans = ob.find_median(v);
    	cout << ans <<"\n";
    }
	return 0;
}
  // } Driver Code Ends