#include<iostream>
#include<algorithm>
#define N 2000000
#define M 2000000
using namespace std;
int n,f[N],dp[N],bac[2][N],ans=N,maxn,minn(M);
long long sumf[M];

int main(int argc,char* argv[]){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>bac[0][i]>>bac[1][i];
        sumf[bac[0][i]]=1;
        maxn=max(maxn,bac[0][i]);
        minn=min(minn,bac[0][i]);
    }
    for(int i=minn;i<=maxn;i++)sumf[i]+=sumf[i-1];
    for(int i=0;i<n;i++){
        f[i]=sumf[bac[0][i]]-1-sumf[(bac[0][i]-bac[1][i]-1)>0?(bac[0][i]-bac[1][i]-1):0];
    }
    for(int i=0;i<n;i++){
        dp[i]=f[i]+dp[(i-f[i]-1)>0?i-f[i]-1:0];
        ans=min(ans,dp[i]+n-i-1);
    }
    cout<<ans;
    return 0;
}

/*
int main(int argc,char* argv[]){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)cin>>bac[0][i]>>bac[1][i];
    for(int i=1;i<n;i++){
        for(int j=i-1;j>=0&&bac[1][i]>=bac[0][i]-bac[0][j];j--){
            f[i]++;
        }
    }
    for(int i=0;i<n;i++){
        dp[i]=f[i]+dp[(i-f[i]-1)>0?i-f[i]-1:0];
        ans=min(ans,dp[i]+n-i-1);
    }
    cout<<ans;
    return 0;
}
*/