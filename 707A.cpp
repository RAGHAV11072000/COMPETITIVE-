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
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	vi a(n),b(n+1),tm(n);
    	b[0]=0;
    	for(int i=0;i<n;i++)
    	{
    		cin>>a[i]>>b[i+1];
    	}
        F(tm,n);
        // cout<<123;
        vi au(n),bu(n+1);
        bu[0]=0;
        for(int h=0;h<n;h++)
        {
        	au[h]=bu[h]+(a[h]-b[h])+tm[h];
        	bu[h+1]=max(au[h]+((b[h+1]-a[h]+1)/2) , b[h+1]);
        	// cout<<au[h]<<" "<<bu[h]<<endl;
        }
        // cout<<endl;
        cout<<au[n-1]<<endl;
        

    }

    return 0;
 }