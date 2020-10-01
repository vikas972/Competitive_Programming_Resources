#include <bits/stdc++.h>
using namespace std;

int dp[10001][10001];

int subset(vector<int> v,int s,int n){
   for(int i=0;i<=n;i++){
        for(int j=0;j<=s;j++){
              if(i==0){
                dp[i][j]=0;
            }
            if(j==0){
                dp[i][j]=1;
            }
        }}
    for(int i=1;i<=n;i++){
        for(int j=1;j<=s;j++){
           if(v[i-1]<=j){
                dp[i][j]=(dp[i-1][j-v[i-1]] + dp[i-1][j]);
                
            }else{
                dp[i][j]=dp[i-1][j];
                  
            }
        }
    }
    
    return dp[n][s];
    
}

int main() {
    int n;
    int s;
    cin>>n;
    cin>>s;
	vector<int> v;
	for(int i=0;i<n;i++){
	    int num;
	    cin>>num;
	    v.push_back(num);
	 }
	 int sum=0;
	 for(int i=0;i<n;i++){
	     sum+=v[i];
	 }
	
/**	if(sum%2!=0){
	    cout<<"Can't Patrition";
	}else{
	    if(subset(v,sum/2,n)){
	        cout<<"Done!!";
	    }else{
	        cout<<"Can't Patrition";
	    }
	}**/
	
	int find=(s+sum)/2;
cout<<	subset(v,find,n);

   cout<<endl;

    vector<int> ans;
   for(int i=0;i<=(sum/2);i++){
       if(dp[n][i]){
          ans.push_back(i);
       }
       
   }

  // int mi=INT_MAX;
  int c=0;
   for(int i=0;i<ans.size();i++){
       //mi=min(mi,sum-2*ans[i]);
       if((sum-2*ans[i])==s){
           c++;
       }
   }
   
    for(int i=0;i<=n;i++){
        for(int j=0;j<=find;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
	return 0;
}
