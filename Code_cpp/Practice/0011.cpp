#include<iostream>
using namespace std;
class IO{
    private:
    void prewrite(int x){
	if(x>9)prewrite(x/10);
	putchar(48|(x%10));
    }
    public:
    void read(int&a){
	char c=getchar();a=0;int f=1;
	while(c<'0'||c>'9'){if(c=='-')f=-1;c=getchar();}
	while(c>='0'&&c<='9')a=(a<<3)+(a<<1)+(c^48),c=getchar();
	a*=f;
    }
    void write(int x){
    if(x<0)putchar('-'),prewrite(-x);
    else prewrite(x);
    }
}fast;
int n,a[100],maxn(-32768),minn(32767),maxp,minp;
int main(){
    fast.read(n);
    for(int i(1),tmp;i<=n;i++){
        fast.read(tmp);
        a[i]=a[i-1]+tmp;
        if(maxn<a[i]){maxn=a[i];maxp=i;}
        if(minn>a[i]){minn=a[i];minp=i;}
    }
    fast.write(++minp);putchar(10);
    fast.write(maxp);putchar(10);
    fast.write(maxn-minn);
    return 0;
}