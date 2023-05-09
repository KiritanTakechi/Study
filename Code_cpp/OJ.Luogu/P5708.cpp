#include<cstdio>
#include<cmath>
double a,b,c,p;
int main(){
    scanf("%lf%lf%lf",&a,&b,&c);
    p=(a+b+c)/2;
    printf("%.1lf",sqrt(p*(p-a)*(p-b)*(p-c)));
    return 0;
}