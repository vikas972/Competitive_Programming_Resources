#include <bits/stdc++.h>
using namespace std;
    int maxProfit(vector<int>& prices) {
        int minPrice=INT_MAX;
        int maxProfit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<minPrice){
                minPrice=prices[i];
            }else if(prices[i]-minPrice >maxProfit){
                maxProfit=prices[i]-minPrice;
            }
        }
        return maxProfit;
    }

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
        vector<int> v;
	    for(int i=0;i<n;i++){
	        int num;
	        cin>>num;
	        v.push_back(num);
	    }
	  cout<<  maxProfit(v);

	}
	return 0;
}