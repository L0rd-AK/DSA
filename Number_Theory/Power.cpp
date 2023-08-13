#include <bits/stdc++.h>
using namespace std;
// how to find 2^n using leftShift
//    Binary => Decimal
// 1<<0 =  1      => 1 which is similar to 2^0
// 1<<1 =  10     => 2 which is similar to 2^1
// 1<<2 =  100    => 4 which is similar to 2^2
// 1<<3 =  1000   => 8 which is similar to 2^3
// 1<<4 =  10000  => 16which is similar to 2^4
int main(){
    
    for(int i=0;i<=4;i++) cout<<(1<<i)<<" ";
    // maximum integer value
    cout<<(1LL<<32)-1<<endl;
}