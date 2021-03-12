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
    string a;
    cin>>a;
    vi upper;
    upper.pb(-1);

    for(int i=0;i<n;i++)
    {
    	if(a[i]>='a' && a[i]<='z');
    	else upper.pb(i);
    }
    upper.pb(n);
    int ans=0;
    for(int i=0;i<upper.size()-1;i++)
    {
    	if(upper[i+1]-1-upper[i]==1) ans=max(ans,1);
    	if(upper[i+1]-1-upper[i]<2) continue;
        map<int,int> m;

    	
    	for(int b=upper[i]+1,count=0;b<upper[i+1];b++)
    	{
            if(m.find(a[b])==m.end())  { m[a[b]]=1;count++;
            ans=max(ans,count);
            }
            
    	}

    }
    cout<<ans;
    return 0;
 }