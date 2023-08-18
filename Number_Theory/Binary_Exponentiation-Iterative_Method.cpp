#include <bits/stdc++.h>
using namespace std;
const int M=1e9+7;
int BinaryExpo(int a,int b){
    int ans=1;
    while(b){
        // (b&1) checking b'th bit is 1 or 0
        if(b&1) ans=(ans*1LL*a)%M;
        a=(a*1LL*a)%M;
        b>>=1;
    }
    return ans;
}
int main(){
    int a,b;
    cin>>a>>b;
    // find a^b
    // O(N) complexity
    int ans=1;
    for(int i=1;i<=b;i++) ans*=a;
    cout<<ans<<endl;
    // O(log(b)) complexity
    cout<<BinaryExpo(a,b)<<endl;


    return 0;
}
