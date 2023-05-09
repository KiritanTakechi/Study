#include<cstdio>
int begin,end,tot,year[500],ans;
int main(){
    scanf("%d%d",&begin,&end);
    for(int i(begin);!(i%400==0||i%4==0&&i%100);i++)
        begin++;
    for(int i(begin);i<=end;i+=4){
        if(i%400==0||i%4==0&&i%100){
            ans++;year[tot++]=i;
        }
    }
    printf("%d\n",ans);
    for(int i(0);i<ans;i++)
        printf("%d ",year[i]);
    return 0;
}