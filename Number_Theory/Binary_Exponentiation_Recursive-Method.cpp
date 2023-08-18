#include <bits/stdc++.h>
using namespace std;
const int M=1e9+7;
int BinaryExpo(int a,int b){
    if(b==0) return 1;//base case: any number^0 = 1
    int x=BinaryExpo(a,b/2);
    // (b&1) checkes if b is even or not
    if(b&1) return (a*(x*1LL*x)%M)%M;
    else return (x*1LL*x)%M;
}
int main(){
    int a,b;
    cin>>a>>b;
    // find a^b
    // O(N) complexity
    int ans=1;
    for(int i=1;i<=b;i++) ans*=a;
    cout<<ans<<endl;
    cout<<BinaryExpo(a,b)<<endl;


    return 0;
}
