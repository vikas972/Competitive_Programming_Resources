#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends


//User function template for C++
class Solution{
public:


	long long maxProduct(int *arr, int n) {
	    long long Maxi=arr[0],Mini=arr[0],Overall=arr[0];
	    for(long long i=1;i<n;i++){

            if(arr[i]<0){
                swap(Maxi,Mini);
            }
            
            Maxi=max((long long)arr[i],Maxi*arr[i]);
            Mini=min((long long)arr[i],Mini*arr[i]);
            

	        Overall=max(Maxi,Overall);
	       
	    }
	    return Overall;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends