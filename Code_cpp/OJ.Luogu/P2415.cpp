#include<cstdio>
long long ans,n,tot;
int main(){
    while(scanf("%lld",&n)!=EOF){
        ans+=n;
        tot++;
    }
    printf("%lld",ans<<tot-1);
    return 0;
}