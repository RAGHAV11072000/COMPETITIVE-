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
    int n,x,y;
    cin>>n>>x>>y;
    if(x>y) cout<<n<<endl;
    int e,g,s;
    e=g=s=0;
    for(int i=0;i<n;i++) 
    {
    	int a;
    	cin>>a;
    	if(a>x) g++;
    	else if(a==x) e++;
    	else s++;
    }
    if(x<=y) 
    {
    	cout<<(e+s+1)/2;
    }
    
       
    

    return 0;
 }