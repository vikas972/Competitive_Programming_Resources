#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>>mergedIntervals;
        if(intervals.size()==0)
        {
            return mergedIntervals;
        }
        sort(intervals.begin(),intervals.end());
        
        vector<int>temp=intervals[0];
        
        for(auto it:intervals)
        {
            if(it[0]<=temp[1])
            {
                temp[1]=max(it[1],temp[1]);
            }
            else
            {
                mergedIntervals.push_back(temp);
                temp=it;
            }
        }
        mergedIntervals.push_back(temp);
        return mergedIntervals;
      
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        vector<vector<int>> v,ans;
        
        for(int i=0;i<num;i++){
            vector<int> te;
            for(int j=0;j<2;j++){
                 int nu;
                 cin>>nu;
                 te.push_back(nu);
            }
           v.push_back(te);
        }
        
        Solution obj;
        ans=obj.merge(v);
       //sort(v.begin(),v.end());
       
        for(int i=0;i<v.size();i++){
             for(int j=0;j<2;j++){
                 cout<<v[i][j]<<" ";
             }
             cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}