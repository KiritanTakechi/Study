#include<cstdio>
int n,sum;
int main(){
    scanf("%d",&n);
    for(int i(1);i<=n;++i)sum+=i;
    printf("%d",sum);
    return 0;
}