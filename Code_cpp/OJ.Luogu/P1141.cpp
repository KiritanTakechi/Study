#include<cstdio>
#include<cstring>
#include<queue>
using namespace std;
queue<pair<int,int>>q;
const int N=1005;
const int dx[]={0,0,-1,1};
const int dy[]={1,-1,0,0};
bool map[N][N];
int vis[N][N];
int bfs(int x,int y);
int n,m,tot,ans[10000];
int main(int argc,char* argv[]){
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%1d",&map[i][j]);
        }
    }
    while(m--){
        int a,b;
        scanf("%d%d",&a,&b);
        printf("%d\n",bfs(a,b));
    }
    return 0;
}
int bfs(int x,int y){
    if(vis[x][y])return ans[vis[x][y]];
    ans[++tot]=1;
    memset(vis,0,sizeof(vis));
    vis[x][y]=1;q.push(make_pair(x,y));
    while(!q.empty()){
        int xx=q.front().first,yy=q.front().second;q.pop();
        for(int i=0;i<4;i++){
            int u=xx+dx[i],v=yy+dy[i];
            if(u<1||u>n||v<1||v>n||vis[u][v]||!(map[xx][yy]^map[u][v]))continue;
            vis[u][v]=tot;
            q.push(make_pair(u,v));
            ans[tot]++;
        }
    }
    return ans[tot];
}