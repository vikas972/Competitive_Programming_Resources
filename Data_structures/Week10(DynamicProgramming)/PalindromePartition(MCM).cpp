#include <bits/stdc++.h>
using namespace std;

int dp[1001][1001];
int isPalindrome(string s,int i,int j){
    string temp="";
    
    for(int k=i;k<=j;k++){
        temp+=s[k];
    }
    cout<<temp<<endl;
    int len1=0,len2=temp.length()-1;
    
    while(len1<len2){
        if(temp[len1++]!=temp[len2--]){
            return 0;
        }
    }
    return 1;
}

int PalindromePartition(string s,int i,int j){
    if(i>=j)return 0;
    if(isPalindrome(s,i,j)==1)return 0;
    
    if(dp[i][j]!=-1)return dp[i][j];
    int mn=INT_MAX;
    for(int k=i;k<=j-1;k++){
        int temp=1+PalindromePartition(s,i,k)+PalindromePartition(s,k+1,j);
        mn=min(mn,temp);
        
    }
    return dp[i][j]=mn;
    
}

int main() {
    memset(dp,-1,sizeof(dp));
  string str;
  cin>>str;
  int l=str.length();
  
  cout<<PalindromePartition(str,0,l-1);
  
  
	return 0;
}
