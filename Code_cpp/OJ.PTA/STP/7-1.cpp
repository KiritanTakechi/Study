#include<stdio.h>
double cm;
int inch;
int main(void){
    scanf("%lf",&cm);
    inch=cm/30.48*12;
    printf("%d %d",inch/12,inch%12);
    return 0;
}