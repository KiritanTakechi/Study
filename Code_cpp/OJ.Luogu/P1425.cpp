#include<cstdio>
int main(){
    int a,b,c,d,e,f;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    e=c-a;
    if(d>b)f=d-b;
    else{f=d-b+60;e=e-1;}
    printf("%d %d",e,f);
    return 0;
}