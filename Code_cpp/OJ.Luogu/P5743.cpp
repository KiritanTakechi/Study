#include<cstdio>
int peach(int n){

    if(n<2)return 1;
    else return (peach(n-1)+1)*2;
}
int n;
int main(){
    scanf("%d",&n);
    printf("%d",peach(n));
    return 0;
}