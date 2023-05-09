#include<cstdio>
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
int n,x,maxn,minn(1000);
int main(){
    scanf("%d",&n);
    for(int i(0);i<n;++i){
        scanf("%d",&x);
        maxn=max(maxn,x);
        minn=min(minn,x);
    }
    printf("%d",maxn-minn);
    return 0;
}