#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
#define ll long long int
#define mp make_pair
#define pb push_back
#define fi first
#define si second


 int main(){

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
    	ll n,a,b;
    	cin>>n>>a>>b;
        if(b>2*a)
        {
           cout<<n*a<<endl;
        }
        else
        {
        	ll ans=0;
        	ans+=((n/2)*b);
        	ans+=((n%2)*a);
        	cout<<ans<<endl;
        }

    }
    return 0;
 }