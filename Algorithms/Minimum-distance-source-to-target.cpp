#include <bits/stdc++.h>
using namespace std;
#define ll long long int

struct node{
    int x,y,distance;
    node(int a,int b,int c){
        x=a;
        y=b;
        distance=c;
    }
};


int BFS(int i,int j,int n,vector<vector<char>>& bfs,vector<vector<long>>& dp){
    int dx[]={0, 0, 1,-1};
    int dy[]={1,-1,0, 0};
    queue <node> q;
    q.push(node(i,j,0));
    //dis[s]=0;
    while(!q.empty()){

        node temp=q.front();
        if(bfs[temp.x][temp.y]=='X') return temp.distance;
        q.pop();
        for(int z=0;z<4;z++){
            int x=temp.x+dx[z];
            int y=temp.y+dy[z];
            if(x>=0 and x<=n and y>=0 and y<=n and bfs[x][y]!='#')
              q.push(node(x,y,temp.distance+1));
        }
    }
    return -1;
}

int main(){
    
    int t,idx=1;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<long> dis(n,INT_MAX);
        vector<vector<char>> bfs(n+1,vector<char>(n+1));
        vector<vector<long>> dp(n+1,vector<long>(n+1,-1));

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>bfs[i][j];
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(bfs[i][j]=='S')
                ans=BFS(i,j,n-1,bfs,dp);
            }
        }
        cout<<ans<<endl;

    }
    
    
    
    return 0;
}