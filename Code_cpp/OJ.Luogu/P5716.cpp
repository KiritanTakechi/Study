#include<cstdio>
int y,m,d[]={0,31,0,31,30,31,30,31,31,30,31,30,31};
int main(){
    scanf("%d%d",&y,&m);
    printf("%d",m==2?(y%100?(y%4?28:29):(y%400?28:29)):d[m]);
    return 0;
}