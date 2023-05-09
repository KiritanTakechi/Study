#include<cstdio>
#include<iostream>
double m,h;
int main(){
    scanf("%lf%lf",&m,&h);
    if(m/h/h<18.5){printf("Underweight");return 0;}
    if(24<=m/h/h){std::cout<<m/h/h<<std::endl<<"Overweight";return 0;}
    printf("Normal");return 0;
}