#include <bits/stdc++.h>
using namespace std;

void printSpiral(vector<vector<int>> a,int row,int col){
    
    int k=0,m=row,l=0,n=col;
    while(k<m && l<n){
        for(int i=l;i<n;i++){
            cout<<a[k][i]<<" ";
        }
        k++;
        for(int j=k;j<m;j++){
            cout<<a[j][n-1]<<" ";
        }
        n--;
        if(k<m){
        for(int i=n-1;i>=l;i--){
            cout<<a[m-1][i]<<" ";
        }
        m--;
            
        }
        if(l<n){
        for(int j=m-1;j>=k;j--){
            cout<<a[j][l]<<" ";
        }
        l++;
            
        }
    }
    cout<<endl;
    
}

int  main(){
    int t;
    cin>>t;
    while(t--){
        
        int row,col;
        cin>>row>>col;
        vector<vector<int>> a;
        for(int i=0;i<row;i++){
            vector<int> ans;
            for(int j=0;j<col;j++){
                int num;
                cin>>num;
                ans.push_back(num);
             }
            a.push_back(ans);
        }
        

        
        printSpiral(a,row,col);
    }
    return 0;
}