#include <bits/stdc++.h>
using namespace std;

void Bubble(int a[],int n){
  for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
          if(a[i]<a[j]){
              swap(a[i],a[j]);
          }
      }
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
        Bubble(a,n);
            for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
    }
    
    return 0;
    
}