#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       // next_permutation(nums.begin(),nums.end());
           
        int i=nums.size()-2;
        
        while(i>=0 && nums[i+1]<=nums[i]){
            i--;
        }
        
        if(i>=0){
            int j=nums.size()-1;
            while(j>=0 && nums[j]<=nums[i]){
                j--;
            }
            swap(nums[i],nums[j]);
        }
        
 reverse(nums.begin()+i+1,nums.end());
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        vector<int> v;
        for(int i=0;i<num;i++){
            int nu;
            cin>>nu;
            v.push_back(nu);
        }
        
        Solution obj;
        obj.nextPermutation(v);
        for(int i=0;i<num;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}