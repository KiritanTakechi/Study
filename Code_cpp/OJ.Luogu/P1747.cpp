#include<iostream>
#include<cstring>
#include<queue>
using namespace std;
const int dx[]={-1,-2,-2,-1,1,2,2,1,-2,-2,2,2};
const int dy[]={2,1,-1,-2,2,1,-1,-2,2,-2,2,-2};
// const int dx2[]={-2,-2,2,2};
// const int dy2[]={2,-2,2,-2};
queue<pair<int,int>> q;
int map[50][50];
bool vis[50][50];
void bfs(int x,int y);
int main(int argc,char* argv[]){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    for(int i=0;i<2;i++){
        int a,b;
        cin>>a>>b;
        bfs(a,b);
        cout<<map[1][1]<<endl;
    }
    return 0;
}
void bfs(int x,int y){
    memset(map,0,sizeof(map)),memset(vis,0,sizeof(vis));
    map[x][y]=0;vis[x][y]=1;q.push(make_pair(x,y));
    while(!q.empty()){
        int xx=q.front().first,yy=q.front().second;q.pop();
        for(int i=0;i<12;i++){
            int u=xx+dx[i],v=yy+dy[i];
            if(u<1||u>25||v<1||v>25||vis[u][v])continue;
            vis[u][v]=1;
            q.push(make_pair(u,v));
            map[u][v]=map[xx][yy]+1;
        }
    }
}