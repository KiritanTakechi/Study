#include<cstdio>
int s,v,t(1910);
int main(){
    scanf("%d%d",&s,&v);
    printf("%02d:%02d",((t-(s/v)-bool(s%v))%1440)/60,((t-(s/v)-!!(s%v))%1440)%60);
    return 0;
}