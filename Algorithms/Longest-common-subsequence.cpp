#include <bits/stdc++.h>
using namespace std;
string a,b,s="";
int LCS(int m,int n){
    if(m==0 || n==0) return 0;
    if(a[m-1]==b[n-1]) return 1+LCS(m-1,n-1); 
    else return max(LCS(m-1,n),LCS(m,n-1));
}
int longestCommonSubsequence(string text1, string text2) {
    int dp[text1.length()+1][text2.length()+1];
    for(int i=text1.length();i>=0;i--){
        for(int j=text2.length();j>=0;j--){
            dp[i][j]=0;
        }
    }
    for(int i=text1.length()-1;i>=0;i--){
        for(int j=text2.length()-1;j>=0;j--){
            if(text1[i]==text2[j]){
                dp[i][j]=1+dp[i+1][j+1];
            }else{
                dp[i][j]=max(dp[i+1][j],dp[i][j+1]);
            }
        }
    }
    return dp[0][0];
}
int main(){
    freopen("D:\\VS-Code\\DSA\\input.txt","r",stdin);
    cin>>a>>b;
    int m=a.length();
    int n=b.length();
    cout<<"Longest common subsequence length: "<<LCS(m,n)<<endl;
    cout<<"Longest common subsequence length: "<<longestCommonSubsequence(a,b)<<endl;
    return 0;
}
