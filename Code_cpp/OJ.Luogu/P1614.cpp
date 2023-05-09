#include<cstdio>
#define min(a,b) a<b?a:b
int n,m,f[3000],t,ans(0x7fffffff);
int main(){
    scanf("%d%d",&n,&m);
    for(int i(1);i<=n;i++){
        scanf("%d",&t);
        f[i]=f[i-1]+t;
    }
    for(int i(0),j(m);j<=n;i++,j++){
        ans=min(ans,f[j]-f[i]);
    }
    printf("%d",ans);
    return 0;
}