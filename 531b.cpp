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
    vector<int> a(n);
    vector<int> c(n);
    for(int i=0;i<n;i++) 
    	{
    		cin>>a[i];
    		c[a[i]]++;
    		if(c[a[i]]>k) {
    			cout<<"NO"<<endl;
    			return 0;
    		}
    	}
    vector<int> c2(n,0);
    c2=c;
    	cout<<"YES"<<endl;
    	for(int i=0;i<n;i++)
    	{
    		cout<<c[a[i]]-c2[a[i]]+1<<" ";
    		c2[a[i]]--;
    	}

    return 0;
 }