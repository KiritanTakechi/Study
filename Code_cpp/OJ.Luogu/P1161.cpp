#include<cstdio>
int n,t,ans;
double a;
int main(){
    scanf("%d",&n);
    while(n--){
        scanf("%lf%d",&a,&t);
        for(int i(1);i<=t;i++){
            ans^=int(a*i);
        }
    }
    printf("%d",ans);
    return 0;
}