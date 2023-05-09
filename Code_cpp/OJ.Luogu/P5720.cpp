#include<cstdio>
int n,i(1),ans;
int main(){
    for(scanf("%d",&n);i<n||i==1;i<<=1,++ans);
    printf("%d",ans);
    return 0;
}