#include<cstdio>
int n,m,k,x;
int binpow(int a,int b){
    int res=1;
    while(b>0){
        if(b&1)res=res*a%n;
        a=a*a%n;
        b>>=1;
    }
    return res;
}
int main(){
    scanf("%d%d%d%d",&n,&m,&k,&x);
    printf("%d",(x%n+m%n*binpow(10,k)%n)%n);
	return 0;
}