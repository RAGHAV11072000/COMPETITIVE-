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
    int n,a1,a2,a0;
    a1=a2=a0=0;
    cin>>n;
    // vector<int> a(n);
    string a;
    cin>>a;
    for(int i=0;i<n;i++) { 
    	// cin>>a[i];
        
        if(a[i]=='1') a1++;
        else if(a[i]=='0') a0++;
        else a2++; 
    }
    int req=n/3;
    if(a2<req)
    {
    	// cout<<a1<<a2<<a0<<endl;
       for(int i=n-1;a2<req;i--) 
       {
       	// cout<<a[i];
       	if(a[i]=='1' && a1>req) {a[i]='2';a1--;a2++;}
       	else if(a[i]=='0' && a0>req) {a[i]='2';a0--;a2++;}
        
        // cout<<a[i]<<endl;
       }
    }
    else if(a2>req){
    	for(int i=0;a2>req;i++) 
       {
       	if(a[i]=='2' && a0<req) {a[i]='0';a0++;a2--;}
       	else if(a[i]=='2' && a1<req) {a[i]='1';a1++;a2--;}
        
       }
    }
    // cout<<a1<<a2<<a0<<endl;
    if(a1!=req)
    {
    	if(a1<req)
    {
       for(int i=n-1;a1<req;i--) 
       {
       	// cout<<a[i];
       	if(a[i]=='0') {a[i]='1';a0--;a1++;}
        
        // cout<<a[i]<<endl;
       }
    }
    else if(a1>req){
    	for(int i=0;a1>req;i++) 
       {
       	if(a[i]=='1') {a[i]='0';a0++;a1--;}
        
       }
    }
      }   
      // cout<<"here"<<n;
    for(int i=0;i<n;i++) cout<<a[i];
    

    
    return 0;
 }