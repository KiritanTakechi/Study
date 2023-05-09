#include<iostream>
#include<algorithm>
#define N 5005
using namespace std;
int n,r,maxn;
int map[N][N],sum[N][N];
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>r;
    for(int i=0,x,y,v;i<n;i++){
        cin>>x>>y>>v;
        map[x+1][y+1]+=v;
    }
    for(int i(1);i<N;i++)
        for(int j(1);j<N;j++){
            sum[i][j]=map[i][j]+sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1];
        }
    for(int i(r);i<N;i++)
        for(int j(r);j<N;j++){
            maxn=max(maxn,map[i][j]-map[i-r][j]-map[i][j-r]+map[i-r][j-r]);
        }
    cout<<maxn;
    return 0;
}