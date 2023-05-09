#include<cstdio>
int n,p(1);
int main(){
    scanf("%d",&n);
    for(int i(1);i<=n*n;++i){
        printf("%02d",i);
        if(!(i%n))putchar(10);
    }
    for(int i(1);i<=n;++i){
        putchar(10);
        for(int j(n-i);j>0;--j)printf("  ");
        for(int j(i);j>0;--j,++p)printf("%02d",p);
    }
    return 0;
}