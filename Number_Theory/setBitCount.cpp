#include <bits/stdc++.h>
using namespace std;
void BinaryToDecimal(int n)
{
    for(int i=7;i>=0;i--) cout<<((n>>i)&1);
    cout<<endl;
}
void setBitCount(int n)
{
    int count=0;
    for(int i=32;i>=0;i--) if((n>>i)&1) count++;
    cout<<"set bit count: "<<count<<endl;
}


int main(){
    BinaryToDecimal(230);
    setBitCount(230);
}
