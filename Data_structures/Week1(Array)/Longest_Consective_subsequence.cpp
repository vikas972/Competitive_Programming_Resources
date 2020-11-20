#include <bits/stdc++.h>
using namespace std;

int findLongestConseqSubseq(int arr[], int n);
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  cout<<findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}// } Driver Code Ends


// arr[] : the input array
// N : size of the array arr[]

// return the length of the longest subsequene of consecutive integers
int findLongestConseqSubseq(int arr[], int N)
{
unordered_set<int> s;
for(int i=0;i<N;i++){
    s.insert(arr[i]);
}
int maxi=0;
for(int i=0;i<N;i++){
    if(s.find(arr[i]-1)==s.end()){
        
        int j=arr[i];
        while(s.find(j)!=s.end()){
            j++;
        }
        
        maxi=max(j-arr[i],maxi);
    }
}
  return maxi;
}