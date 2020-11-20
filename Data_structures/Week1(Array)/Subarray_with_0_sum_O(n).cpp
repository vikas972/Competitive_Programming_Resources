// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;

bool subArrayExists(int arr[], int n)
{
	unordered_map<int,bool> sumMap;

	// Traverse throught array and store prefix sums
	int sum = 0;
	for (int i = 0 ; i < n ; i++)
	{
		sum += arr[i];

		// If prefix sum is 0 or it is already present
		if (sum == 0 || sumMap[sum] == true)
			return true;

		sumMap[sum] = true;
	}
	return false;
}

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    	if (subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}
