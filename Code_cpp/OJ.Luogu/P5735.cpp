#include<cstdio>
#include<cmath>
double x[3],y[3],ans;
int main(){
    for(int i(0);i<3;i++)
        scanf("%lf%lf",&x[i],&y[i]);
    for(int i(0),j(1);i<3;i++,j++)
        ans+=sqrt((x[j%3]-x[i])*(x[j%3]-x[i])+(y[j%3]-y[i])*(y[j%3]-y[i]));
    printf("%.2lf",ans);
    return 0;
}