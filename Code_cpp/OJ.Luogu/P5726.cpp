#include<cstdio>
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
double n,x,maxn,minn(10),sum;
int main(){
    scanf("%lf",&n);
    for(int i(0);i<n;++i){
        scanf("%lf",&x);
        sum+=x;
        maxn=max(maxn,x);
        minn=min(minn,x);
    }
    printf("%.2lf",(sum-maxn-minn)/(n-2));
    return 0;
}