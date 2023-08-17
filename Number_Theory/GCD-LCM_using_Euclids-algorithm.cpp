#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int GCD(int a,int b){
    if(b==0) return a;
    else return GCD(b,a%b);
}
int main(){
	int a[]= {1,2,3,4,5};
    int size=sizeof(a)/sizeof(a[0]);
    
    // GCD
    int gcd=0,lcm=1;
    for(int i=0;i<size;i++){
        gcd=GCD(gcd,a[i]);
    } 
    cout<<"GCD: "<<gcd<<endl;
    // LCM
    for (int i = 0; i < size; i++) {
        lcm = lcm * a[i] / GCD(lcm, a[i]);
    }
    cout<<"LCM: "<<lcm<<endl;

    
}

