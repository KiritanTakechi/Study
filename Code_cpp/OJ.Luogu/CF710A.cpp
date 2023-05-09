#include<cstdio>
char a,b;
int main(){
    scanf("%c%c",&a,&b);
    if((a=='a'||a=='h')&&(b=='1'||b=='8')){printf("3");return 0;}
    if((a=='a'||a=='h')||(b=='1'||b=='8')){printf("5");return 0;}
    printf("8");
    return 0;
}