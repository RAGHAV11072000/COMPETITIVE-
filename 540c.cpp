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
    vector<int> a(n*n);
    for(int i=0;i<n*n;i++) cin<<a[i];
    int x=n*n;
    unordered_map<int,int> c;
    for(int i=0;i<n*n;i++)
    {
    	if(c.find(a[i])==c.end()) c[a[i]]=0;
    	c[a[i]]++:
    }
    unordered_map<int,list<int>> c;
    
    int a,b,c;
    a=b=c=0;/*
    

    x=sqrt(x/4);

    
    return 0;
 }