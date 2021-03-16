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
    int n,k;
    cin>>n>>k;
    ll s;
    s=k;
    s*=(k-1);
    // int ans=0;
    if(s<n) {cout<<"no";return 0;}
    
    cout<<"YES"<<endl;
    int d=0;
    for(int i=0;i<n;i++)
    {
    	if(i%k==0) d++;
    	cout<<((i%k)+1)<<" "<<((i%k)+d)%k +1<<endl;
    }

    return 0;
 }