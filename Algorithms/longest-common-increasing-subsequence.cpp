#include <bits/stdc++.h>
using namespace std;
int lengthOfLIS(vector<int>& nums) {
        int a[nums.size()];
        for(int i=0;i<nums.size();i++) a[i]=1;

        for(int i=nums.size()-1;i>=0;i--){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]<nums[j])a[i]=max(a[i],1+a[j]);
            }
        }
        int maxx=a[0];
        for(int i=1;i<nums.size();i++) maxx=max(maxx,a[i]);
    return maxx;
}

int main(){
    freopen("D:\\VS-Code\\DSA\\input.txt","r",stdin);
    vector<int> a={0,1,0,3,2,3};
    cout<<"Longest common subsequence length: "<<lengthOfLIS(a)<<endl;
    return 0;
}
