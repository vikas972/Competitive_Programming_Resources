#include <bits/stdc++.h>
using namespace std;
//7
std::vector<int> ans ;
int getPairsCount(int arr[], int n, int k) {
        // code here
        map<int,int> mp;
        int count=0;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
    
        for(int i=0;i<n;i++){
            
            if(mp[k-arr[i]]>0){
                if(k%arr[i] ==0 ){
                    int ans=mp[arr[i]]/(k/arr[i]);
                    if(ans>0){
                       count+=ans; 
                       mp.erase(arr[i]);
                    }
                   
                }else{
                count+=(mp[k-arr[i]]*mp[arr[i]]);
                 mp.erase(k-arr[i]);
                    
                }
            }
  
        }
            
    
  
        
    return count;
    }
int main(){
   
        int n,k;
        cin>>n>>k;
        int a[n];
        
        for(int i=0;i<n;i++){
          cin>>a[i];
        }
        
        cout<< getPairsCount(a,n,k)<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        
    
    return 0;
}