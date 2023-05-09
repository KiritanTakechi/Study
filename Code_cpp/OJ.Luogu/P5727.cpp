#include<cstdio>
int n[1000],i;
int main(){
    for(scanf("%d",&n[i]);n[i]!=1;++i)
        n[i]%2?n[i+1]=n[i]*3+1:n[i+1]=n[i]/2;
    for(;i>=0;--i)printf("%d ",n[i]);
    return 0;
}