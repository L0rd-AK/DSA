#include <bits/stdc++.h>
using namespace std;
int dis[100],bfs[100][100],p[100];
void BFS(int s,int n){
    for(int i=0;i<n;i++) dis[i]=INT_MAX;
    queue <int> q;
    q.push(s);
    dis[s]=0;
    while(!q.empty()){

        int temp=q.front();
        q.pop();
        for(int i=0;i<n;i++){
            int v=bfs[temp][i];
            if(v){
                if(dis[i]==INT_MAX){
                    dis[i]=dis[temp]+1;
                    p[i]=temp;
                    q.push(i);
                }
            }
        }
    }

}

int main(){
    freopen("D:\\VS-Code\\DSA\\input.txt","r",stdin);
    //freopen("D:\\VS-Code\\Competitive programming practice\\output.txt","w",stdout);
    int n,temp,s=0,edg;
    cin>>n;
    cin>>edg;
    temp=n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            bfs[i][j]=0;
    
    while(edg--){
        int a,b;
        cin>>a>>b;
        bfs[a-1][b-1]=1;
        bfs[b-1][a-1]=1;
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         cin>>bfs[i][j];
        //     }
        // }
    }
    n=temp;
    BFS(s,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<bfs[i][j]<<" ";
        }cout<<endl;
    }
    for(int i=0;i<n;i++){
        cout<<"distance "<<s<<" to "<<i<<": "<<dis[i]<<endl;
    }
    
            
}