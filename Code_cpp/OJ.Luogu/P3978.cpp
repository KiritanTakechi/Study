#include<cstdio>
double n;
int main(){
    scanf("%lf",&n);
    printf("%.10lf",n*(n+1)/(4*n-2));
    return 0;
}