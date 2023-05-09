#include<cstdio>
int n;
int main(){
    scanf("%d",&n);
    printf("%d",n%100?(n%4?0:1):(n%400?0:1));
    return 0;
}