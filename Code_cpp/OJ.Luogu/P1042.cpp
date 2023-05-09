#include<cstdio>
const int N=25000;
int abs(int x){return x<0?-x:x;}
char c,x[N],y[N],*t=x,*u=y;
int a[2],b[2];
int main(){
    while(c!='E'){
        scanf(" %c",&c);
        if(c=='W'){a[0]++;a[1]++;}
        if(c=='L'){b[0]++;b[1]++;}
        if((a[0]>=11||b[0]>=11)&&abs(a[0]-b[0])>1){
            t+=sprintf(t,"%d:%d\n",a[0],b[0]);
            a[0]=b[0]=0;
        }
        if((a[1]>=21||b[1]>=21)&&abs(a[1]-b[1])>1){
            u+=sprintf(u,"%d:%d\n",a[1],b[1]);
            a[1]=b[1]=0;
        }
    }
    t+=sprintf(t,"%d:%d\n",a[0],b[0]);
    u+=sprintf(u,"%d:%d\n",a[1],b[1]);
    printf("%s\n%s",x,y);
    return 0;
}