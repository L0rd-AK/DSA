#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll a[]={7,7,6,4,4,4,4,3,3,3,3,2,2};

	ll size=sizeof(a)/sizeof(a[0]);
	int n=pow(2,size)-1,c=0;

        set<vector<ll>> uniqueSubsets;
        // here we are creating all unique subset which sum=12, from array a[]
        // here we are using bit masking to find all subset
		for(ll i=0;i<=n;i++)
		{
			ll sum=0;
            vector<ll> subSet;
			for(int j=0;j<=size-1;j++)   
			{
				if(i&(1LL<<j)){
                    sum+=a[j];
                    subSet.push_back(a[j]);
                    if(sum>12) break;
                } 
			}
			if(sum==12)
			{
				uniqueSubsets.insert(subSet);
			}
		}

        for (const auto& subSet : uniqueSubsets) {
            for (const auto& element : subSet) {
                cout << element << " ";
            }
            cout << endl;
        }
	
	
}

