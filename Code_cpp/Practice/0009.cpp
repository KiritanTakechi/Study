#include<stdio.h>
int n,tot;
int main(){
    printf("让我们来画一个向下的金字塔。\n金字塔有几层：");
    scanf("%d",&n);
    for(int i=n;i>=0;i--){
        for(int j=0;j<tot;j++)printf(" ");
        for(int j=0;j<(i-1)*2+1;j++)printf("%d",(tot+1)%10);
        if(i>1)putchar(10);
        tot++;
    }
    return 0;
}