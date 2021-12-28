#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
//using namespace __gnu_pbds;
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math,O3")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define ll  long long
#define int long long
#define ld  long double
#define endl "\n"
#define pb  push_back
#define fill(a,val) memset(a,val,sizeof(a))
#define ff  first
#define ss  second
#define test  ll t; cin>>t; while(t--)
#define loop(i,a,b)  for(ll i=a;i<b;i++)
#define loopr(i,a,b) for(ll i=a;i>=b;i--)
#define pii pair<ll,ll>
#define all(v) v.begin(),v.end()
//typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

//  order_of_key (k) : Number of items strictly smaller than k .
//  find_by_order(k) : K-th element in a set (counting from zero).

const ll mod     = 1000*1000*1000+7;
const ll inf     = 1ll*1000*1000*1000*1000*1000*1000 + 7;
const ll mod2    = 998244353;
const ll N       = 1000 * 1000 + 10;
const ld pi      = 3.141592653589793;
ll power(ll x,ll y,ll p = LLONG_MAX ){ll res=1;x%=p;while(y>0){if(y&1)res=(res*x)%p;y=y>>1;x=(x*x)%p;}return res;}
ll ncr(ll n,ll r,ll m){if(r>n)return 0;ll a=1,b=1,i;for(i=0;i<r;i++){a=(a*n)%m;--n;}while(r){b=(b*r)%m;--r;}return (a*power(b,m-2,m))%m;}

bool is_possible(vector<vector<char>> a,ll i,ll j,char K){
	
	for(ll k=0;k<9;k++){
		if(a[i][k]==K) return 0;
	}
	for(ll k=0;k<9;k++){
		if(a[k][j]==K) return 0;
	}
	ll ci,cj;
	if(i<3) ci=0;
	else if(i<6) ci=3;
	else ci=6;
	
	if(j<3) cj=0;
	else if(j<6) cj=3;
	else cj=6;
	
	for(auto ii:{ci,ci+1,ci+2}){
		for(auto jj:{cj,cj+1,cj+2}){
			if(a[ii][jj]==K) return 0;
		}
	}
	return 1;
}
bool rec(vector<vector<char>> &a,ll i,ll j){
	if(i==9){
		return 1;
	}
	if(j==9){
		return rec(a,i+1,0);
	}
	if(a[i][j]!='.') return rec(a,i,j+1);
	
	for(char k='1';k<='9';k++){
		if(is_possible(a,i,j,k)){
			a[i][j]=k;
			if(rec(a,i,j+1)==true) return 1;
			a[i][j]='.';
		}
	}
	return 0;
	
}
void solve(vector<vector<char>> &a){
	rec(a,0,0);
}
void solve(){
    vector<vector<char>> a(9,vector<char>(9));
    for(ll i=0;i<9;i++){
    	for(ll j=0;j<9;j++){
    		cin>>a[i][j];
    	}
    }
    solve(a);
    for(ll i=0;i<9;i++){
    	for(ll j=0;j<9;j++){
    		cout<<a[i][j]<<" ";
    	}
    	cout<<endl;
    }
}

signed main(){
    fastio();
    // test
    solve();
    return 0;
}
