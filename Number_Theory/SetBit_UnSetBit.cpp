#include <bits/stdc++.h>
using namespace std;
void BinaryToDecimal(int n);
void check_Bit_Set_Or_Not(int n,int i){
    // checkingn if I'th bit of N is set or not
    // here let n=9, 9 => 00001001 and 1<<i returns 00001000 if i=3
    // so 9 =>           00001001
    // 1<<i =>           00001000
    // ---------------------------
    // and operation     00001000 which is 8 so, it basically means if(8) cout<<"Set Bit"<<endl;
    if(n&(1<<i)) cout<<"Set Bit"<<endl;
    else cout<<"Bit not set"<<endl;
}
void SetBit(int n,int i){
    // (n|(1<<i))
    // here let n=9, 9 => 00001001 and 1<<i returns 00010000 if i=4
    // so 9 =>           00001001
    // 1<<i =>           00010000
    // ---------------------------
    // or operation      00011001 which is 25
    BinaryToDecimal((n|(1<<i))); // basically, here we are snding 25 => BinaryToDecimal(25)
}
void UnSetBit(int n,int i){
    // (n&(~(1<<i)))
    // here let n=9, 9 => 00001001 and 1<<i returns 00010000 if i=3
    // so 9 =>           00001001
    // ~(1<<i) =>        11110111  here, 1<<i => 00001000 ~ inverse it so,  ~(1<<i) => 11110111
    // ---------------------------
    // and operation     00000001 which is 1
    BinaryToDecimal((n&(~(1<<i)))); // basically, here we are snding 1 => BinaryToDecimal(1)
}
int main(){

    BinaryToDecimal(9);
    SetBit(9,3);
    UnSetBit(9,3);
    // check_Bit_Set_Or_Not(9,3);
}
void BinaryToDecimal(int n)
{
    for(int i=8;i>=0;i--) cout<<((n>>i)&1);
    cout<<endl;
}