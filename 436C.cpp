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
    int a,b,f,k;
    cin>>a>>b>>f>>k;
    int r=b-f;
    int s=2*f;
    int t=2*(a-f);
    if( k>1 && ( t>b )) {cout<<-1;return 0;}
    if( k>2 && ( s>b )) {cout<<-1;return 0;}
    if(s/2>b || t/2>b)  {cout<<-1;return 0;}
    int ans=0;
    while(k--)
    {
    	if(k==0) t=t/2;
    	// cout<<k<<r<<endl;
    	if(r<t) { ans++;r=b-t;}
    	else r=r-t;
    	// cout<<ans<<" "<<r<<endl;
    	if(k==0) break;
    	if(k==1) s=s/2;
    	if(r<s) {
    		ans++;
    		r=b-s;
    	} else r=r-s;
    	k--;  
    	// cout<<ans<<"  "<<r<<endl;

    }
    cout<<ans<<endl;
    {

    }
    return 0;
 }