#include<cstdio>
int n,p(1);
int main(){
    for(scanf("%d",&n);n>0;printf("\n"),n--)
        for(int i(0);i<n;printf("%02d",p),i++,p++);
    return 0;
}