#include <bits/stdc++.h>
using namespace std;
void BinaryToDecimal(int n);
// how to find 2^n using leftShift
//       Binary => Decimal
// 1<<0 =  1      => 1  which is similar to 2^0
// 1<<1 =  10     => 2  which is similar to 2^1
// 1<<2 =  100    => 4  which is similar to 2^2
// 1<<3 =  1000   => 8  which is similar to 2^3
// 1<<4 =  10000  => 16 which is similar to 2^4
int main(){
    
    for(int i=0;i<=4;i++) cout<<(1<<i)<<" ";
    // maximum integer value
    cout<<(1LL<<32)-1<<endl;
    BinaryToDecimal(156);
}
void BinaryToDecimal(int n)
{
    for(int i=8;i>=0;i--) cout<<((n>>i)&1);
}