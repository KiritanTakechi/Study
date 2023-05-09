#include<stdio.h>
int main(){
    int h,m;
    scanf("%d:%d",&h,&m);
    printf("%d:%d %s",h!=12?h%12:h,m,h!=12?(!((h/12)&1)?"AM":"PM"):"PM");
    return 0;
}