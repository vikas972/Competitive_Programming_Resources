#include <bits/stdc++.h>
using namespace std;

void insertion(int a[],int n){
   int gap,value;
    for(int i=1;i<n;i++){
        gap=i;
        value=a[i];
        while(gap>0 && a[gap-1]>value){
            a[gap]=a[gap-1];
            gap--;
        }
        a[gap]=value;
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
        insertion(a,n);
            for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
    }
    
    return 0;
    
}