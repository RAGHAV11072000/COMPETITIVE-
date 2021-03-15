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
    int n;
    cin>>n;
    n+=4;

    
    if((n%4)==0) cout<<"0";
    else if((n+1)%4==0) cout<<"0";
    else cout<<"1";
    return 0;
    
 }