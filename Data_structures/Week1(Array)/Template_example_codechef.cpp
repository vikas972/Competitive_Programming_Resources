 /* 
  //1 - A
///===========================================  TAREQ ABRAR  =============================================
#include "bits/stdc++.h"
//#include<stdio.h>
#define pb(x) push_back(x)
#define XX first
#define YY second
#define cst 1000000007
#define nor_rad(x) ( ( PI*x )/180)
#define rad_nor(x)  ( (x/IP)*180 )
#define all(x) x.begin(),x.end()
#define mem(x,y) memset(x,y,sizeof(x));
#define eps 1e-9
#define rev reverse
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define pii pair<int,int>
#define vii vector<int>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;

const ll mod = 1e9+7;
const ld error = 2e-6;
const ld PI = acos(-1); //const ld PI = acosl(-1)

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define eq(x, y) (fabs((x)-(y))<error)
#define bt(i) (1LL<<(i))

// #define debug(x) cerr<<#x<<" = "<<(x)<<"\n"ock::now().time_since_epoch().count()); //mt199937_64 for ll
//mt19937 rng(199);

inline ll MOD(ll x, ll m = mod){
    ll y = x % m;
    return (y >= 0) ? y: y+m;
} 
//
const int inf = 1e9;
const ll infl = 1061109567;
const int nmax = 1000+10;
/// ===========================================  template  =================================================



void solve(){
    

return;


}


int main()
{
     int t; scanf("%d",&t); for(int i=1;i<=t;i++){  solve(); }
        


   



//


    return 0;
}


*/





  //2 - B
//

///===========================================  TAREQ ABRAR  ================================================
#include "bits/stdc++.h"
//#include<stdio.h>
#define pb(x) push_back(x)
#define XX first
#define YY second
#define cst 1000000007
#define nor_rad(x) ( ( PI*x )/180)
#define rad_nor(x)  ( (x/IP)*180 )
#define all(x) x.begin(),x.end()
#define mem(x,y) memset(x,y,sizeof(x));
#define eps 1e-9
#define rev reverse
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;


const ll mod = 1e9+7;
const ll mod2= 998244353;
const ld error = 2e-6;
const ld PI = acosl(-1); //const ld PI = acosl(-1)

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define eq(x, y) (fabs((x)-(y))<error) 
#define bt(i) (1LL<<(i))

// #define debug(x) cerr<<#x<<" = "<<(x)<<"\n"
// #define hoise cerr<<"hoise - "<<__LINE__<<"\n"
// #define tham getchar()
// mt19937 rng((unsigned)chrono::system_clock::now().time_since_epoch().count()); //mt199937_64 for ll
//mt19937 rng(199);

inline ll MOD(ll x, ll m = mod){
    ll y = x % m;
    return (y >= 0) ? y: y+m;
}

const int inf = 1e9;
const ll infl = 1061109567;
const int nmax = 1000+10;
#define pii pair<int,int>
#define vii vector<int>
#define pLL pair<ll,ll>
#define vLL vector<ll>
/// ===========================================  template  =======================================================

// struct cm
// {
//   bool operator () ( const node n1, const node n2  ) const{
// return n1.cost>n2.cost; 
//   }
// };



void solve(){
 ll x,y; cin>>x>>y;
 if(x==y){
    cout<<0<<"\n"; return;
 }

if(x>y){
ll drk= x-y;
if(drk%2==0) cout<<1<<endl;
else cout<<2<<endl;
return;
}

ll drk= y-x;
if( drk%2==1 ) { cout<<1<<endl; return; }

ll cn=1;
while(drk%2==0){
    cn*=2; drk/=2;
}

cout<<min(cn,3LL)<<endl; return;



}




int main()
{ 
  FASTIO;
  int t; cin>>t; for(int i=1;i<=t;i++){  solve(); }
  




  
   

     
 
// end
}



 
/*

#include <bits/stdc++.h>  
#include<stdio.h>
#define pb(x) push_back(x)
#define XX first
#define YY second
#define cst 1000000007
#define nor_rad(x) ( ( PI*x )/180)
#define rad_nor(x)  ( (x/IP)*180 )
#define all(x) x.begin(),x.end()
#define mem(x,y) memset(x,y,sizeof(x));
#define eps 1e-9
#define rev reverse
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
#define vii vector<int>

const ll mod = 1e9+7;
const ld error = 2e-6;
const ld PI = acosl(-1); //const ld PI = acosl(-1)

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define eq(x, y) (fabs((x)-(y))<error)
#define bt(i) (1LL<<(i))

// #define debug(x) cerr<<#x<<" = "<<(x)<<"\n"
// #define hoise cerr<<"hoise - "<<__LINE__<<"\n"
// #define tham getchar()
// mt19937 rng((unsigned)chrono::system_clock::now().time_since_epoch().count()); //mt199937_64 for ll
//mt19937 rng(199);

inline ll MOD(ll x, ll m = mod){
    ll y = x % m;
    return (y >= 0) ? y: y+m;
}

const int inf = 1e9;
const ll infl = 1061109567;
const int nmax = 1000+10;
#define pii pair<int,int>
/// ===========================================  template  =======================================================

// struct cm
// {
//   bool operator () ( const node n1, const node n2  ) const{
// return n1.cost>n2.cost;
//    bv01/r/ };

ll c[52];
ll numCoins;
ll table[52][5005];
bool calculated[52][5005];
ll solve(ll i, ll make)
{
    if(make<0) return 0;
    if(make==0)return 1;
    if(i > numCoins) return 0;
    if(calculated[i][make] == false){ //eliminating overlap
        table[i][make] = solve(i, make - c[i]) + solve(i+1, make);
        calculated[i][make] = true;
    }
    return table[i][make];
}
int main(){

    ll make;
     numCoins=9; c[1]=4; c[2]=9; c[3]=16; c[4]=25; c[5]=36; c[6]=49; c[7]=64;
    c[8]=81; c[9]=100;
    int cse=0;
    while(scanf("%lld",&make)==1){ string ssss; cin>>ssss;
    cse++;
    printf("Case %d: ",cse );
    ll ot= solve(1, make);
    if(ot>0) cout<<ot<<"\n";
    else cout<<"Cannot be given.\n";

}
    return 0;
}
*/




/*
  //4 - D

///===========================================  TAREQ ABRAR  =======================================================
#include <bits/stdc++.h>
#include<stdio.h>
#define pb(x) push_back(x)
#define XX first
#define YY second
#define cst 1000000007
#define nor_rad(x) ( ( PI*x )/180)
#define rad_nor(x)  ( (x/IP)*180 )
#define all(x) x.begin(),x.end()
#define mem(x,y) memset(x,y,sizeof(x));
#define eps 1e-9
#define rev reverse
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;

const ll mod = 1e9+7;
const ld error = 2e-6;
const ld PI = acosl(-1); //const ld PI = acosl(-1)

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define eq(x, y) (fabs((x)-(y))<error)
#define bt(i) (1LL<<(i))

// #define debug(x) cerr<<#x<<" = "<<(x)<<"\n"
// #define hoise cerr<<"hoise - "<<__LINE__<<"\n"
// #define tham getchar()
// mt19937 rng((unsigned)chrono::system_clock::now().time_since_epoch().count()); //mt199937_64 for ll
//mt19937 rng(199);

inline ll MOD(ll x, ll m = mod){
    ll y = x % m;
    return (y >= 0) ? y: y+m;
}

const int inf = 1e9;
const ll infl = 1061109567;
const int nmax = 1000+10;
#define pii pair<int,int>
#define vii vector<int>
/// ===========================================  template  =======================================================



int main()
{
    FASTIO
ll fk=45487815665;
ll sv;

while(fk){
sv=fk;
fk= fk&(fk-1);
}

cout<<sv<<endl;



    return 0;
}


*/




/*   //5 - E

///===========================================  TAREQ ABRAR  =======================================================
#include <bits/stdc++.h>
#include<stdio.h>
#define pb(x) push_back(x)
#define XX first
#define YY second
#define cst 1000000007
#define nor_rad(x) ( ( PI*x )/180)
#define rad_nor(x)  ( (x/IP)*180 )
#define all(x) x.begin(),x.end()
#define mem(x,y) memset(x,y,sizeof(x));
#define eps 1e-9
#define rev reverse
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;

const ll mod = 1e9+7;
const ld error = 2e-6;
const ld PI = acosl(-1); //const ld PI = acosl(-1)

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define eq(x, y) (fabs((x)-(y))<error)
#define bt(i) (1LL<<(i))

// #define debug(x) cerr<<#x<<" = "<<(x)<<"\n"
// #define hoise cerr<<"hoise - "<<__LINE__<<"\n"
// #define tham getchar()
// mt19937 rng((unsigned)chrono::system_clock::now().time_since_epoch().count()); //mt199937_64 for ll
//mt19937 rng(199);

inline ll MOD(ll x, ll m = mod){
    ll y = x % m;
    return (y >= 0) ? y: y+m;
}

const int inf = 1e9;
const ll infl = 1061109567;
const int nmax = 1000+10;
/// ===========================================  template  =======================================================


int main()
{
    cout << "Hello world!" << endl;






    return 0;
}

*/





/*  //6 - F

///===========================================  TAREQ ABRAR  =======================================================
#include <bits/stdc++.h>
#include<stdio.h>
#define pb(x) push_back(x)
#define XX first
#define YY second
#define cst 1000000007
#define nor_rad(x) ( ( PI*x )/180)
#define rad_nor(x)  ( (x/IP)*180 )
#define all(x) x.begin(),x.end()
#define mem(x,y) memset(x,y,sizeof(x));
#define eps 1e-9
#define rev reverse
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;

const ll mod = 1e9+7;
const ld error = 2e-6;
const ld PI = acosl(-1); //const ld PI = acosl(-1)

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define eq(x, y) (fabs((x)-(y))<error)
#define bt(i) (1LL<<(i))

// #define debug(x) cerr<<#x<<" = "<<(x)<<"\n"
// #define hoise cerr<<"hoise - "<<__LINE__<<"\n"
// #define tham getchar()
// mt19937 rng((unsigned)chrono::system_clock::now().time_since_epoch().count()); //mt199937_64 for ll
//mt19937 rng(199);

inline ll MOD(ll x, ll m = mod){
    ll y = x % m;
    return (y >= 0) ? y: y+m;
}

const int inf = 1e9;
const ll infl = 1061109567;
const int nmax = 1000+10;
/// ===========================================  template  =======================================================


int main()
{
    cout << "Hello world!" << endl;






    return 0;
}

*/







/*  //7 - G

///===========================================  TAREQ ABRAR  =======================================================
#include <bits/stdc++.h>
#include<stdio.h>
#define pb(x) push_back(x)
#define XX first
#define YY second
#define cst 1000000007
#define nor_rad(x) ( ( PI*x )/180)
#define rad_nor(x)  ( (x/IP)*180 )
#define all(x) x.begin(),x.end()
#define mem(x,y) memset(x,y,sizeof(x));
#define eps 1e-9
#define rev reverse
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;

const ll mod = 1e9+7;
const ld error = 2e-6;
const ld PI = acosl(-1); //const ld PI = acosl(-1)

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define eq(x, y) (fabs((x)-(y))<error)
#define bt(i) (1LL<<(i))

// #define debug(x) cerr<<#x<<" = "<<(x)<<"\n"
// #define hoise cerr<<"hoise - "<<__LINE__<<"\n"
// #define tham getchar()
// mt19937 rng((unsigned)chrono::system_clock::now().time_since_epoch().count()); //mt199937_64 for ll
//mt19937 rng(199);

inline ll MOD(ll x, ll m = mod){
    ll y = x % m;
    return (y >= 0) ? y: y+m;
}

const int inf = 1e9;
const ll infl = 1061109567;
const int nmax = 1000+10;
/// ===========================================  template  =======================================================


int main()
{
    cout << "Hello world!" << endl;






    return 0;
}

*/





/*  //8 - H

///===========================================  TAREQ ABRAR  =======================================================
#include <bits/stdc++.h>
#include<stdio.h>
#define pb(x) push_back(x)
#define XX first
#define YY second
#define cst 1000000007
#define nor_rad(x) ( ( PI*x )/180)
#define rad_nor(x)  ( (x/IP)*180 )
#define all(x) x.begin(),x.end()
#define mem(x,y) memset(x,y,sizeof(x));
#define eps 1e-9
#define rev reverse
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;

const ll mod = 1e9+7;
const ld error = 2e-6;
const ld PI = acosl(-1); //const ld PI = acosl(-1)

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define eq(x, y) (fabs((x)-(y))<error)
#define bt(i) (1LL<<(i))

// #define debug(x) cerr<<#x<<" = "<<(x)<<"\n"
// #define hoise cerr<<"hoise - "<<__LINE__<<"\n"
// #define tham getchar()
// mt19937 rng((unsigned)chrono::system_clock::now().time_since_epoch().count()); //mt199937_64 for ll
//mt19937 rng(199);

inline ll MOD(ll x, ll m = mod){
    ll y = x % m;
    return (y >= 0) ? y: y+m;
}

const int inf = 1e9;
const ll infl = 1061109567;
const int nmax = 1000+10;
/// ===========================================  template  =======================================================


int main()
{
    cout << "Hello world!" << endl;






    return 0;
}

*/






/*  //9 - I

///===========================================  TAREQ ABRAR  =======================================================
#include <bits/stdc++.h>
#include<stdio.h>
#define pb(x) push_back(x)
#define XX first
#define YY second
#define cst 1000000007
#define nor_rad(x) ( ( PI*x )/180)
#define rad_nor(x)  ( (x/IP)*180 )
#define all(x) x.begin(),x.end()
#define mem(x,y) memset(x,y,sizeof(x));
#define eps 1e-9
#define rev reverse
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;

const ll mod = 1e9+7;
const ld error = 2e-6;
const ld PI = acosl(-1); //const ld PI = acosl(-1)

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define eq(x, y) (fabs((x)-(y))<error)
#define bt(i) (1LL<<(i))

// #define debug(x) cerr<<#x<<" = "<<(x)<<"\n"
// #define hoise cerr<<"hoise - "<<__LINE__<<"\n"
// #define tham getchar()
// mt19937 rng((unsigned)chrono::system_clock::now().time_since_epoch().count()); //mt199937_64 for ll
//mt19937 rng(199);

inline ll MOD(ll x, ll m = mod){
    ll y = x % m;
    return (y >= 0) ? y: y+m;
}

const int inf = 1e9;
const ll infl = 1061109567;
const int nmax = 1000+10;
/// ===========================================  template  =======================================================


int main()
{
    cout << "Hello world!" << endl;






    return 0;
}

*/





/*   //10 - J

///===========================================  TAREQ ABRAR  =======================================================
#include <bits/stdc++.h>
#include<stdio.h>
#define pb(x) push_back(x)
#define XX first
#define YY second
#define cst 1000000007
#define nor_rad(x) ( ( PI*x )/180)
#define rad_nor(x)  ( (x/IP)*180 )
#define all(x) x.begin(),x.end()
#define mem(x,y) memset(x,y,sizeof(x));
#define eps 1e-9
#define rev reverse
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;

const ll mod = 1e9+7;
const ld error = 2e-6;
const ld PI = acosl(-1); //const ld PI = acosl(-1)

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define eq(x, y) (fabs((x)-(y))<error)
#define bt(i) (1LL<<(i))

// #define debug(x) cerr<<#x<<" = "<<(x)<<"\n"
// #define hoise cerr<<"hoise - "<<__LINE__<<"\n"
// #define tham getchar()
// mt19937 rng((unsigned)chrono::system_clock::now().time_since_epoch().count()); //mt199937_64 for ll
//mt19937 rng(199);

inline ll MOD(ll x, ll m = mod){
    ll y = x % m;
    return (y >= 0) ? y: y+m;
}

const int inf = 1e9;
const ll infl = 1061109567;
const int nmax = 1000+10;
/// ===========================================  template  =======================================================


int main()
{
    cout << "Hello world!" << endl;






    return 0;
}

*/

