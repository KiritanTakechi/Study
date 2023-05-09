#include<iostream>
#include<cstring>
#include<queue>
using namespace std;
const int dx[8]={-1,-2,-2,-1,1,2,2,1};
const int dy[8]={2,1,-1,-2,2,1,-1,-2};
queue<pair<int,int>> q;
int cnt[500][500];
bool vis[500][500];
int n,m,x,y;
void bfs(int x,int y);
int main(int argc,char* argv[]){
    //ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>m>>x>>y;
    bfs(x,y);
    for(int i=1;i<=n;i++){
	    for(int j=1;j<=m;j++)
            printf("%-5d",cnt[i][j]);
        printf("\n");
    }
    return 0;
}
void bfs(int x,int y){
    memset(cnt,-1,sizeof(cnt)),memset(vis,0,sizeof(vis));
    cnt[x][y]=0;vis[x][y]=1;q.push(make_pair(x,y));
    while(!q.empty()){
		int xx=q.front().first,yy=q.front().second;q.pop();
		for(int i=0;i<8;i++){
			int u=xx+dx[i],v=yy+dy[i];
			if(u<1||u>n||v<1||v>m||vis[u][v])continue;
		    vis[u][v]=1;
            q.push(make_pair(u,v));
            cnt[u][v]=cnt[xx][yy]+1;
		}
	}
}