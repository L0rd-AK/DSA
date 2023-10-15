#include <bits/stdc++.h>
using namespace std;
int bfs[1000][1000],colr[1000];
// 1 means red color
// -1  haven't colored yet
// 0 means blue color

bool is_Bipartite(int s,int n){
    for(int i=0;i<n;i++) colr[i]=-1;
    queue <int> q;
    q.push(s);
    colr[s]=1;
    while(!q.empty()){

        int temp=q.front();
        int currentColor=colr[temp];
        q.pop();
        for(int i=0;i<n;i++){
            int v=bfs[temp][i];
            if(v){
                if(colr[i]==-1){
                    colr[i]=!currentColor;
                    q.push(i);
                }else if(colr[i]==currentColor)return false;
            }
        }
    }
    return true;
}

int main(){
    freopen("D:\\VS-Code\\DSA\\input.txt","r",stdin);
    //freopen("D:\\VS-Code\\Competitive programming practice\\output.txt","w",stdout);
    int n,temp,start=0,edg;
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            bfs[i][j]=0;
        
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>bfs[i][j];
        }
    }
    if(is_Bipartite(start,n)) cout<<"Biparrtite!!!\n";
    else cout<<"Not Bipertite\n";
    
    return 0;
}