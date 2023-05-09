#include<cstdio>
#include<cmath>
bool prime(int x){
	if(x<=1)return false;
	for(int i=2;i<=sqrt(x);i++){if(x%i==0)return false;}
	return true;
}
class IO{
    public:
    void read(int&a){
	char c=getchar();a=0;int f=1;
	while(c<'0'||c>'9'){if(c=='-')f=-1;c=getchar();}
	while(c>='0'&&c<='9')a=(a<<3)+(a<<1)+(c^48),c=getchar();
	a*=f;
    }
    void prewrite(int x){
	if(x>9)prewrite(x/10);
	putchar(48|(x%10));
    }
    void write(int x){
    if(x<0)putchar('-'),prewrite(-x);
    else prewrite(x);
    }
}io;
int n,num;
int main(){
    io.read(n);
    for(int i(0);i<n;i++){
        io.read(num);
        if(prime(num))io.write(num),putchar(32);
    }
    return 0;
}