#include<cstdio>
#include<cmath>
bool prime(int n){
    if(n<2)return 0;
    for(int i(2);i<=sqrt(n);i++)if(!(n%i))return 0;
    return 1;
}
void write(int n){
    for(int i(2),j(n-2);;i++,j--)
        if(prime(i)&&prime(j)){printf("%d=%d+%d\n",n,i,j);break;}
}
int n;
int main(){
    scanf("%d",&n);
    for(int i(4);i<=n;i+=2)
        write(i);
    return 0;
}