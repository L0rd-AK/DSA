#include <bits/stdc++.h>
using namespace std;
long long dp[1000][1000]={0};
int main() {
  freopen("D:\\VS-Code\\DSA\\input.txt","r",stdin);
  // freopen("D:\\VS-Code\\DSA\\output.txt","w",stdout);
  int n;
  //enter number of coins Ex. n=3
  cin>>n;
  int coins[n];
  // enter n coins Ex.{1,3,5}
  for(int i=0;i<n;i++)cin>>coins[i];
  int amount;
  //enter amount
  cin>>amount;
  for(int i=0;i<=n;i++) dp[i][0]=1;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=amount;j++){
      if(coins[i-1]>j) {dp[i][j]=dp[i-1][j];}
      else{
        dp[i][j]=dp[i-1][j]+dp[i][j-coins[i-1]];
      }
    }
  }cout<<"Minimum number of ways: "<<dp[n][amount]<<endl;
 

  return 0;
}
