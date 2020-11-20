#include <bits/stdc++.h>
using namespace std;

#define Max 1000000

int multi(int fact[],int x,int size);
void factorial(int n){
    int fact[Max];
    fact[0]=1;
    int  fact_size=1;
    
    for(int i=2;i<=n;i++){
        fact_size=multi(fact,i,fact_size);
    }
    
    for(int i=fact_size-1;i>=0;i--){
        cout<<fact[i];
    }
    cout<<endl;
}


int multi(int fact[],int x,int size){
    
    int carry=0;
    for(int i=0;i<size;i++){
        int prod=fact[i]*x+carry;
        fact[i]=prod%10;
        carry=prod/10;
    }
    
    while(carry){
        fact[size]=carry%10;
        carry/=10;
        size++;
    }
    return size;
}


int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	   factorial(n);
	}
	return 0;
}