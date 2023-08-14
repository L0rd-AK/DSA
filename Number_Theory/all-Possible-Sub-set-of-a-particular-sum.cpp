#include <iostream>
#include <math.h>
using namespace std;
#define ll long long int
int main(){
	ll a[]={7,7,6,4,4,4,4,3,3,3,3,2,2};

	ll size=sizeof(a)/sizeof(a[0]);
	int n=pow(2,size)-1,c=0;
	cout<<n<<endl;
	
		for(ll i=0;i<=n;i++)
		{
			ll sum=0;
			for(int j=0;j<=size-1;j++)   
			{
				if(i&(1LL<<j)){
                    sum+=a[j];
                    if(sum>12) break;
                } 
			}
			if(sum==12)
			{
				for(int j=0;j<size;j++)
				{
					if(i&(1LL<<j))cout<<a[j]<<" ";
				}
				cout<<endl;
			}
		}
	
	
}

