
#include <bits/stdc++.h> 
using namespace std; 
#define ll long long

string permute(int n,ll Nth) 
{
	string ans="";
	Nth=Nth-1;
    ll fact=1;
    vector<ll> v;
	for(int i=1;i<n;i++){
        fact*=i;
        v.push_back(i);
    }
    v.push_back(n);
	while(1){
		ll temp=Nth/fact;
		ans+=to_string(v[temp]);
		v.erase(v.begin() + temp);
		if(v.size() == 0) break;

		Nth=Nth%fact;
		fact=fact/(v.size());
	}
	
	return ans;
} 


int main() 
{ 
    freopen("input.txt","r",stdin);
    int t,n;cin>>t;
    while(t--){
        cin>>n;
        ll Nth;cin>>Nth; 
	    cout<<permute(n,Nth)<<endl;
    } 
	return 0; 
} 