#include <bits/stdc++.h>
using namespace std;
void BinaryToDecimal(int n);
void check_Bit_Set_Or_Not(int n,int i){
    // checkingn if I'th bit of N is set or not
    // here let n=9, 9 => 000001001 and 1<<i returns 00001000 if i=3
    // so 9 =>          000001001
    // 1<<i =>          000001000
    // ---------------------------
    // and operation    000001000 which if 8 so, it basicaly means if(8) cout<<"Set Bit"<<endl;
    if(n&(1<<i)) cout<<"Set Bit"<<endl;
    else cout<<"Bit not set"<<endl;
}
int main(){

    BinaryToDecimal(9);
    check_Bit_Set_Or_Not(9,3);
}
void BinaryToDecimal(int n)
{
    for(int i=8;i>=0;i--) cout<<((n>>i)&1);
    cout<<endl;
}