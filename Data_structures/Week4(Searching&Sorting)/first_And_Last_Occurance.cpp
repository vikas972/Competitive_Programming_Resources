#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){

     int n,occ;
     cin>>n>>occ;
     vector<int> v;
     for(int i=0;i<n;i++){
         int num;
         cin>>num;
         v.push_back(num);
     }
     int first=-1,second=-1;
     for(int i=0;i<n;i++){
         if(v[i]==occ && first==-1){
             first=i;
         }
         if(v[n-i-1]==occ && second==-1){
             second=n-i-1;
         }
         if(first!=-1 && second!=-1){break;}
     }
     if(first==-1 && second==-1){
         cout<<"-1"<<endl;
     }else{
     cout<<first<<" "<<second<<endl;
         
     }

}
int main()
 {
	int t;
    cin>>t;
    while(t--){
        solve();
    
    }
    return 0;
}