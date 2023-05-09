#include<cstdio>
#include<cmath>
const int max(int a,int b){return a>b?a:b;}
int n,a,ans(-214748364);
int main(){
    scanf("%d",&n);
    for(int i(0);i<n;i++){
        scanf("%d",&a);
        if(int(sqrt(a))*int(sqrt(a))!=a)ans=max(ans,a);
    }
    printf("%d",ans);
    return 0;
}