#include <bits/stdc++.h>
using namespace std;
const double precision=1e-7;
double root(double mid,int x){
    double ans=1;
    for(int i=1;i<=x;i++) ans*=mid;
    return ans;
}
int main(){
    double n;int x;
    cin>>n>>x;
    double lo=1,hi=n,mid;
    while((hi-lo)>precision){
        mid=(hi+lo)/2;
        if(root(mid,x)>n) hi=mid;
        else lo=mid;
    }
    cout<<lo<<endl;

    return 0;
}
