#include <bits/stdc++.h>
using namespace std;
int dp[1000][1000];
int main() {
  freopen("D:\\VS-Code\\DSA\\input.txt","r",stdin);
  // freopen("D:\\VS-Code\\DSA\\output.txt","w",stdout);
  for(int i=0;i<1000;i++)for(int j=0;j<1000;j++)dp[i][j]=INT_MAX-1;
  int n;
  cin>>n;
  int coins[n];
  for(int i=0;i<n;i++)cin>>coins[i];
  int amount;
  cin>>amount;
  for(int i=0;i<=n;i++) {dp[i][0]=0;}

  for(int i=1;i<=n;i++){
    for(int j=1;j<=amount;j++){
      if(coins[i-1]>amount) {dp[i][j]=dp[i-1][j];}
      else{
        dp[i][j]=min(dp[i-1][j],1+dp[i][j-coins[i-1]]);
      }
    }
  }cout<<"Minimum number of coins: "<<dp[n][amount]<<endl;
  for(int i=0;i<=n;i++){
    for(int j=0;j<=amount;j++){
      printf("%d ",dp[i][j]);
    }cout<<endl;
  }
 

  return 0;
}
