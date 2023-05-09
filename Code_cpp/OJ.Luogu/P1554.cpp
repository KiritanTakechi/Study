#include<cstdio>
int m,n,ans[10];
int main(){
    scanf("%d%d",&m,&n);
    for(int i(m);i<=n;i++)
        for(int j(i);j>0;j/=10)
            ans[j%10]++;
    for(int i(0);i<10;i++)
        printf("%d ",ans[i]);
    return 0;
}