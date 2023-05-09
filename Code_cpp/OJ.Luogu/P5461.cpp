#include<cstdio>
int n;
int main(){
    scanf("%d",&n);
    n=1<<n;
    for(int i(0);i<n;i++){
        for(int j(0);j<n;j++)
            printf("%d ",(i|j)==n-1?1:0);
        putchar(10);
    }
    return 0;
}