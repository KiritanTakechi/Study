#include<cstdio>
#define min(a,b) a<b?a:b
int i,n,a,ans(1001);
int main(){
    for(scanf("%d",&n);i<n;i++){
        scanf("%d",&a);
        ans=min(a,ans);
    }
    printf("%d ",ans);
    return 0;
}