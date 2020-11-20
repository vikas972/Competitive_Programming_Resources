#include <bits/stdc++.h>
using  namespace std;

void solve(vector<int> &v,int n){
    
  
    
    int ind=0;
    for(int i=0;i<n;i++){
        if(v[i]>=0){
            swap(v[i],v[ind]);
            ind++;
        }
    }
int negind=0;
int last=n-1;
while(negind<n && last>=0){
    if(v[last]<0){
        swap(v[negind],v[last]);
        negind+=2;
    }else{
        break;
    }
    last--;
}
   
    
}

int  main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        
        std::vector<int> arr;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            arr.push_back(num);
        }
        
        solve(arr,n);
                for(int i=0;i<n;i++){
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
    }
    
    
    return 0;
}