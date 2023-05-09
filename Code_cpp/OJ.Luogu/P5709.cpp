#include<cstdio>
#include<cmath>
double m,t,s;
int main(){
    scanf("%lf%lf%lf",&m,&t,&s);
    if(t==0){printf("%lf",m);return 0;}
    m-s/t>0?printf("%.0lf",m-ceil(s/t)):printf("0");
    return 0;
}