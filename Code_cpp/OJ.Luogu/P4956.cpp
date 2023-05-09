#include<cstdio>
int n,x;
int main(){
    scanf("%d",&n);
    for(int i(1);i<=100&&(n-364*i)>0;++i)if((n-364*i)%1092==0)x=i;
    printf("%d\n%d",x,(n-364*x)/1092);
    return 0;
}