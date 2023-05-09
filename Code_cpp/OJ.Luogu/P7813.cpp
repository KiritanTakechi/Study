#include<cstdio>
#define mod 1000000007
#define inv4 250000002
long long t,n,k,ans,temp;
class IO{
    public:
    template<typename I>
    void read(I&a){
	char c=getchar();a=0;int f=1;
	while(c<'0'||c>'9'){if(c=='-')f=-1;c=getchar();}
	while(c>='0'&&c<='9')a=(a<<3)+(a<<1)+(c^48),c=getchar();
	a*=f;
    }
    template<typename I>
    void prewrite(I x){
	if(x>9)prewrite(x/10);
	putchar(48|(x%10));
    }
    template<typename I>
    void write(I x){
    if(x<0)putchar('-'),prewrite(-x);
    else prewrite(x);
    }
}io;
int main(){
    io.read(t);
    while(t--){
        io.read(n),io.read(k);
        io.write((((2*n*(n+1)-(k-1))%mod*k-(k/2)*(4*n-2))%mod+mod)*inv4%mod);
        putchar(10);
    }
    return 0;
}