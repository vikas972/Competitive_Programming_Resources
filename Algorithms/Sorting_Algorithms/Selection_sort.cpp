#include <bits/stdc++.h>
using namespace std;

void Selection(int a[],int n){
    int small,j,i;
  for( i=0;i<n;i++){
      small=i;
      for(j=i;j<n;j++){
         if(a[small]>a[j]){
             small=j;
             } 
      }

      swap(a[i],a[small]);
  }
}

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n;
        cin>>n;
        
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        Selection(a,n);
            for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
    }
    
    return 0;
    
}