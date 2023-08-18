#include <bits/stdc++.h>
using namespace std;
const double precision=1e-6;

int main(){
    double n;
    cin>>n;
    double lo=1,hi=n,mid;
    while((hi-lo)>precision){
        mid=(hi+lo)/2;
        if(mid*mid>n) hi=mid;
        else lo=mid;
    }
    cout<<lo<<endl;

    return 0;
}
