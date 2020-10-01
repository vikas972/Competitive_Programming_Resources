#include <bits/stdc++.h>
using namespace std;
int dp[10001][10001];
int knapsack(vector<int> w,vector<int> v,int n,int c){
    //Top-Down Approach
     for(int i=0;i<=n;i++){
        for(int j=0;j<=c;j++){
            if(i==0 || j==0){
                dp[i][j]=0;
            }
            else if(w[i-1]<=j){
                dp[i][j]=max((v[i-1]+dp[i-1][j-w[i-1]]),dp[i-1][j]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][c];
    
   /**  Recursion With Memoization
    if(n==0 || c==0)return 0;
    if(dp[n][c]!=-1)return dp[n][c];
    if(w[n-1]<=c){
        return dp[n][c]= max((v[n-1]+knapsack(w,v,n-1,c-w[n-1])),knapsack(w,v,n-1,c));
    }else{
        return dp[n][c]=knapsack(w,v,n-1,c);
    }**/
    
}
int main() {
//	memset(dp,-1,sizeof(dp));
	int n,c;
	cin>>n>>c;
	vector<int> w,v;
	
	for(int i=0;i<n;i++){
	    int num;
	    cin>>num;
	    w.push_back(num);
	}
		
	for(int i=0;i<n;i++){
	    int num;
	    cin>>num;
	    v.push_back(num);
	}
	
	cout<<knapsack(w,v,n,c);
	
	return 0;
}
