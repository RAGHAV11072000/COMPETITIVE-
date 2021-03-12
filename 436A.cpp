#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
#define ll long long int
#define ld long double

#define mp make_pair
#define pb push_back
#define fi first
#define si second
#define vi vector<int>
#define vll vector<long long int>
#define vld vector<lond double>
#define F(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define F1(a,n) for(int i=1;i<=n;i++){cin>>a[i];}
#define Pa(a,n) for(int i=0;i<n;i++){cout<<a[i]<<' ';}cout<<endl;
#define Pa1(a,n) for(int i=1;i<=n;i++){cout<<a[i]<<' ';}cout<<endl;
#define NF(a,n,m) for(int i=0;i<n;i++){for(int j=0;j<m;j++){cin>>a[i][j];}}
#define NF1(a,n,m) for(int i=1;i<=n;i++){for(int j=1;j<=m;j++){cin>>a[i][j];}}
#define PNF(a,n,m) for(int i=0;i<n;i++){for(int j=0;j<m;j++){cout<<a[i][j]<<' ';}cout<<endl;}cout<<endl;
#define PNF1(a,n,m) for(int i=1;i<=n;i++){for(int j=1;j<=m;j++){cout<<a[i][j]<<' ';}cout<<endl;}cout<<endl;
#define AS 200001
#define mod 1000000007
#define pii pair<ll,ll>
 int32_t main(){

 	fastIO
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    //start 
    int n;
    cin>>n;
    vi a(n);
    F(a,n);
    map<int,int> m;
    for(auto node:a)   
    {
    	m[node]++;
    }
    if(m.size()!=2) {cout<<"NO";return 0;}
    auto it=m.begin();
    int q=it->second,r=it->fi;
    it++;
    if(it->second==q) {cout<<"YES"<<endl;
    cout<<r<<" "<<it->fi<<endl;return 0;}
    else {cout<<"NO";return 0;}
    return 0;
 }