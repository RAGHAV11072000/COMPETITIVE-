#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
#define ll long long int
#define mp make_pair
#define pb push_back
#define fi first
#define si second
map<int,list<int>> m;
int n;
 solve(int i, int &last,vector<int>& a,vector<bool>& v)
 {
      for(int node:m[a[i]])
      {  
      	v[node]=1;     	
      	last=max(last,node);
      }
    
    return last+1;  
 }
 int main(){

 	fastIO
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    //start 
    cin>>n;
    vector<int> a(n,0);
    for(int i=0;i<n;i++) { 
    	cin>>a[i];
        m[a[i]].push_back(i);}
    vector<bool> v(n,0);
    vector<int> b(n);
    
    b[0]=0;
    int last=0;
    int ans=1;

    // cout<<solve(0,last,a,v);
    // cout<<solve(4,last,a,v);

    // cout<<"last"<<last<<endl;
    for(int g=0;g<n;)
    { 
        if(g==last) ans*=2;
        solve(g,last,a,v);

    }
    cout<< ans/2;
    return 1;
 }