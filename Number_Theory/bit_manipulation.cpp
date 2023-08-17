#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void DecToBinary(int n){
    for(int i=7;i>=0;i--){
        cout<<((n>>i)&1);
    }
}
int main(){
	int n;
    cin>>n;
    // checking odd - even using bit manipulation
    if(n&1) cout<<"Odd\n";
    else cout<<"Even\n"; 
    // divided by 2
    cout<<(n>>1)<<endl;
    // multiply by 2
    cout<<(n<<1)<<endl;
    DecToBinary(n);
}

