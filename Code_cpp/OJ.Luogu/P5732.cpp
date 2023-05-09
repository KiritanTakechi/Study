#include<cstdio>
int C(int x, int y) {
    int temp=1;
    for(int i=1;i<=y;i++)
        temp=temp*(x-y+i)/i;
    return temp;
}
int n;
int main(){
    scanf("%d",&n);
    for(int i(0);i<n;i++){
        for(int j(0);j<=i;j++){
            printf("%d ",C(i,j));
        }
        putchar(10);
    }
    return 0;
}
