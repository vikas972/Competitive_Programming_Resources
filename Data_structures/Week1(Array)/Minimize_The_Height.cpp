//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function template for C++

class Solution{   
public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        if(n==1){
            return 0;
        }
        sort(arr,arr+n);
        int ans=arr[n-1]-arr[0];
        int small=arr[0]+k;
        int big=arr[n-1]-k;
        if(big<small){
            swap(big,small);
        }
        
        for(int i=1;i<n-1;i++){
            
            int sub=arr[i]-k;
            int add=arr[i]+k;
            
            if(sub>=small || add<=big)
                continue;
            
            
            if(big-sub <= add-small){
                small=sub;
            }else{
                big=add;
            }
        }
       return min(ans,big-small);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends