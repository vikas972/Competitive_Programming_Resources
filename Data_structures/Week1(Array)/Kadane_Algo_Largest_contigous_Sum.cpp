#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        int maxEndHere=0,maxSoFar=INT_MIN;
        
        for(int i=0;i<n;i++){
            maxEndHere=maxEndHere+a[i];
            if(maxEndHere<a[i])
                maxEndHere=a[i];
            if(maxSoFar<maxEndHere)
                maxSoFar=maxEndHere;
        }
        cout<<maxSoFar<<endl;
    }
    return 0;
}