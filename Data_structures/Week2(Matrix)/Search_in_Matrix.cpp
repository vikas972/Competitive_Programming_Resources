#include<bits/stdc++.h>
using namespace std;

bool search_in_matrix(vector<vector<int>> arr,int row,int col,int target){
    
    if(row==0 || col==0)return false;
    for(int i=0;i<row;i++){
        if(target>=arr[i][0] && target<=arr[i][col-1]){
            int x=0,y=col-1;
            while(x<=col){
            int mid=(x+y)/2;
            
            if(arr[i][mid]==target)return true;
            if(arr[i][mid]>target){ y=mid-1;}
            else{ x=mid+1;}
            
        }
    }
}
    return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int row,col,target;
        cin>>row>>col>>target;
        
        std::vector<vector<int>> arr ;
        for(int i=0;i<row;i++)
        {   vector<int> ans;
            for(int j=0;j<col;j++){
                int num;
                cin>>num;
                ans.push_back(num);
            }
            arr.push_back(ans);
        }
      cout<<  search_in_matrix(arr,row,col,target)<<endl;
    }

    return 0;
}
