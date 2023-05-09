#include<cstdio>
#include<algorithm>
int n[3];
char c[3];
int main(){
    scanf("%d %d %d\n",&n[0],&n[1],&n[2]);
    std::sort(n,n+3);
    scanf("%c%c%c",&c[0],&c[1],&c[2]);
    printf("%d %d %d",n[c[0]-'A'],n[c[1]-'A'],n[c[2]-'A']);
    return 0;
}