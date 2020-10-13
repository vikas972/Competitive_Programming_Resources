#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n,k,x,y;
    cin>>n>>k>>x>>y;
    int c=0;
    for(int i=0;i<=n;i++){
        if(x == y){
            c++;
        }
        x=(x+k)%n;
    }
    if(c){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
return 0;
}
