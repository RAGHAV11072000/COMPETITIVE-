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
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    ll sum=0;
    for(int i=0;i<n;i++) {cin>>a[i];sum+=a[i];}

    if(sum<m) { cout<<-1;return 0;}
    sort(a.begin(),a.end(),greater<int>());
    int l,r;
    l=1;r=n;
    int ans=-1;
    while(l<=r)
    {

    	int mid=(l+r)/2;
    	// cout<<l<<" "<<r<<" "<<mid<<endl;
    	ll sum=0;
    	for(int i=0;i<n;i++)
    	{
           sum+=max(0,a[i]-(i/mid));

    	}
    	// cout<<sum;
    	if(sum>=m)
    	{
    		// cout<<"yes"<<endl;
    		ans=mid;
    		r=mid-1;
    	}
    	else 
    		l=mid+1;

    }
    cout<<ans;





    // if(sum==m) { cout<<n;return 0;}	
    // sort(a.begin(),a.end(),greater<int>());
    // for(int i=0;i<n;i++) cout<<a[i]<<" ";
    // 	cout<<endl;
    // dp[0]=a[0];
    // memset(dp1,-1,sizeof(dp1));
    // dp1[0]=a[0]; 
    // if(dp[0]>=m) 
    // {
  	 //    	cout<<1<<endl;return 0; 
    // }
    // for(int i=0;i<a.size();i++)
    // {
    // 	int k=-1;
    // 	for(int j=i;j<a.size();j++)
    // 	{
    //         k++;
    // 		if(j==0) {
    // 			dp[j]=a[j];
    // 			if(dp[j]>=m) 
    // 			{
    // 	    	cout<<i+1<<endl;return 0;
    // 	    }
    // 			 continue;}
    //         int o=a[j]-j+i;    
    // 		if(o<0) break; 
    // 		if(i==j) dp[j] = dp1[j-1]+a[j]-k;
    // 	    else dp[j]=dp[j-1]+a[j]-k;
    // 	    if(dp[j]>=m) {
    // 	    	cout<<i+1<<endl;
    // for(int i=0;i<a.size();i++) cout<<dp1[i];
    // 	    	return 0;
    // 	    }
    // 	    cout<<dp1[j]<<"("<<j<<")"<<"  ";
    // 	    dp1[j]=max(dp[j],dp1[j]);
    // 	    cout<<dp1[j]<<" ";
    // 	}
    // 	cout<<endl;
    // } 
    // for(int i=0;i<a.size();i++) cout<<dp1[i]<<" ";
    // 	cout<<-1;
        return 0;
 }