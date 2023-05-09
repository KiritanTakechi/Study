#include<cstdio>
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
}fast;
int t,n,ans,num;
int main(){
    fast.read(t);
    while (t--){   
        ans=0;
        fast.read(n);
        for(int i(0);i<n;i++){fast.read(num);ans^=num;}
        puts(ans?"Yes":"No");
    }
    return 0;
}