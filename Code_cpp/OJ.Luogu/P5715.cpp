#include<cstdio>
#include<algorithm>
int n[3];
int main(){
    scanf("%d%d%d",&n[0],&n[1],&n[2]);
    std::sort(n,n+3);
    printf("%d %d %d",n[0],n[1],n[2]);
    return 0;
}