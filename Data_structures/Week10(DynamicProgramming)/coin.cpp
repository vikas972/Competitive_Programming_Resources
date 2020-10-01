#include <bits/stdc++.h>
using namespace std;
int dp[3]={10,6,1};
vector<int> track;

int mincoin(int c){
    
    if(c==0)return 0;
    
    int minvalue=1000000;
    for(int coins:dp){
        if((c-coins)>=0){
            int curcoin=mincoin(c-coins);
            track.push_back(curcoin);
            if(curcoin<minvalue)minvalue=curcoin;
        }
        
    }
    return minvalue+1;
}

int main() { 
    
    int n;
    cin >>n;
    cout <<mincoin(n)<<endl;
    
    
    for(int i=0;i<n;i++){
        cout  <<track[i]<<" ";
    }
    
    
    
    return 0;
}

