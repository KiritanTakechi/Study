#include<cstdio>
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
int n,m;
double ans;
int main(){
    scanf("%d%d",&n,&m);
    while(n--){
        double sco,sum=0,maxn=0,minn=10;
        for(int i(0);i<m;i++){
            scanf("%lf",&sco);
            sum+=sco;
            maxn=max(maxn,sco);
            minn=min(minn,sco);
        }
        sum-=(maxn+minn);
        sum/=(m-2);
        ans=max(ans,sum);
    }
    printf("%.2lf",ans);
    return 0;
}