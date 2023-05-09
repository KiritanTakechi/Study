#include<cstdio>
int x;
int main(){
    scanf("%d",&x);
    printf("Today, I ate %d apple%s",x,x<2?".":"s.");
    return 0;
}