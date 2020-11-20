#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int flag=0,sum;
	    for(int i=0;i<n;i++){
            sum=a[i];
	        for(int j=i+1;j<=n;j++){
	            if(sum==0){
	                flag=1;
	                break;
	            }else{
	                if(j<n){
	                sum+=a[j];
	            }
	            }
	        }
	    }
	    if(flag){
	        cout<<"Yes"<<endl;
	    }else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}