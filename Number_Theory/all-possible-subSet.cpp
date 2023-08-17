#include <iostream>
#include <math.h>
using namespace std;
#define ll long long int
int main(){
	ll a[]={1,2,3,4};//you can change the array as you desire

	ll size=sizeof(a)/sizeof(a[0]);
	int n=pow(2,size)-1;

		for(ll i=0;i<=n;i++)
		{

			for(int j=0;j<=size-1;j++)   
			{
				if(i&(1LL<<j)) cout<<a[j]<<" "; 
			}
            cout<<endl;
		}
	
}

