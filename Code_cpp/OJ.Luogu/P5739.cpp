#include<cstdio>
int factorial(int n){
    if(n<2)return 1;
    else return n*factorial(n-1);
}
int n;
int main(){
    scanf("%d",&n);
    printf("%d",factorial(n));
    return 0;
}