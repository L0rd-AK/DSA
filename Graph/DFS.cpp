// #include <bits/stdc++.h>
// using namespace std;
// bool vis[100],dfs[100][100];
// int p[100];
// void DFS(int s,int n){
//   for(int i=0;i<100;i++)vis[i]=false;
//   stack<int> st;
//   st.push(s);
//   int j=0;
//   while(!st.empty()){
//     int temp=st.top();
//     p[j++]=temp;
//     st.pop();
//      if(!vis[temp]){
//         vis[temp]=true;
//         for(int i=0;i<n;i++){
//             int x=dfs[temp][i];
//             if(x and !vis[i]){
//                 st.push(i);
//             }
//         }
//     }
    
//   }  

// }

// int main(){
//     freopen("D:\\VS-Code\\DSA\\input.txt","r",stdin);
//     //freopen("D:\\VS-Code\\Competitive programming practice\\output.txt","w",stdout);
//     int n,temp,s=0,edg;
//     cin>>n;
//     cin>>edg;
//     temp=n;
//     for(int i=0;i<n;i++)
//         for(int j=0;j<n;j++)
//             dfs[i][j]=0;
    
//     while(edg--){
//         int a,b;
//         cin>>a>>b;
//         dfs[a-1][b-1]=1;
//         dfs[b-1][a-1]=1;
//     }
//     n=temp;
//     DFS(s,n);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<dfs[i][j]<<" ";
//         }cout<<endl;
//     }
//     for(int i=0;i<n;i++){
//         // cout<<"distance "<<s<<" to "<<i<<": "<<p[i]<<endl;
//         cout<<p[i]<<" ";
//     }
    
            
// }
//========================================================================
#include <bits/stdc++.h>
using namespace std;

bool vis[100], dfs[100][100];
int  p[100];

void DFS(int s, int n,int e) {
  for (int i = 0; i < n; i++)
    vis[i] = false;

  stack<int> st;
  st.push(s);
  int j=0;
  while (!st.empty()) {
    int temp = st.top();
    p[j++] = temp;
    if(temp==e) return;
    st.pop();

    if (!vis[temp]) {
      vis[temp] = true;
      
      cout<<temp<<" ";

      for (int i = 0; i < n; i++) {
        int x = dfs[temp][i];
        if (x && !vis[i])
          st.push(i);
      }
    }
  }
}

int main() {
  freopen("D:\\VS-Code\\DSA\\input.txt", "r", stdin);
  //freopen("D:\\VS-Code\\Competitive programming practice\\output.txt","w",stdout);

  int n, s = 0,e=3, edg;
  cin >> n;
  cin >> edg;

  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      dfs[i][j] = 0;

  while (edg--) {
    int a, b;
    cin >> a >> b;
    dfs[a - 1][b - 1] = 1;
    dfs[b - 1][a - 1] = 1;
  }

  DFS(s, n,e);
  cout<<endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << dfs[i][j] << " ";
    }
    cout << endl;
  }

  for (int i = 0; i < n; i++) {
    cout << p[i] <<" ";
  }

  return 0;
}
