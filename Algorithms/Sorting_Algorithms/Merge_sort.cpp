#include <bits/stdc++.h>
using namespace std;


void mergeSort(int a[],int l,int m,int r){
    int size,left_end;
    size=r-l;
    left_end=m;
    int temp[size];
    int pos=l;
    
    while(l<left_end && m<=r){
        if(a[l]<=a[m]){
            temp[pos]=a[l];
            l++;
        }else{
            temp[pos]=a[m];
            m++;
        }
        pos++;
    }
    while(l<left_end){
         temp[pos]=a[l];
         pos++;
            l++;
    }
    while(m<=r){
            temp[pos]=a[m];
            pos++;
            m++;
    }
    
    for(int i=0;i<=size;i++){
        a[r]=temp[r];
        r--;
    
    }
    
}
void merge(int a[],int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        merge(a,l,mid);
        merge(a,mid+1,r);
        mergeSort(a,l,mid+1,r);
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
        merge(a,0,n-1);
            for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
    }
    
    return 0;
    
}