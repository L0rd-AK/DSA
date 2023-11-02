#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool DFS(int s, int n,vector<bool>& vis,vector<vector<int>>& dfs) {
  bool ans=false;
  if(!vis[s])ans=true;
  stack<int> st;
  st.push(s);
  vis[s]=true;
  
  while (!st.empty()) {
    int temp = st.top();
    // cout<<temp<<" ";
    st.pop();

    if (vis[temp]){
      for (int i = 0; i < n; i++) {
        int x = dfs[temp][i];
        if (x && !vis[i]){
          
          vis[i]=true;
          st.push(i);
        }
      }
    }
  }
  // cout<<endl;
  return ans;
}

int main(){

    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;
      vector<bool> vis(V,false);
    	vector<vector<int>> dfs(V,vector<int>(V,0));

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >>u>>v;
        dfs[u][v]=1;
        dfs[v][u]=1;
    	}
    	
      int scc=0;
      for(int i=0;i<V;i++) if(DFS(i,V,vis,dfs)) scc++;

    	cout<<scc<<endl;
    }
    return 0;
}