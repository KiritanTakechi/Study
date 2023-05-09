#include<cstdio>
int abs(int a){return a<0?-a:a;}
#define N 30005
int t,x,y,fat[N],front[N],num[N];
char opt;
int find(int x){
    if(fat[x]==x)return fat[x];
    int fx=find(fat[x]);
    front[x]+=front[fat[x]];
    return fat[x]=fx;
}
void unionn(int x,int y){
    fat[x]=y;
    front[x]+=num[y];
    num[y]+=num[x];
    num[x]=0;
    }
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
    char get(){
	unsigned char c=getchar();
	while(c<=32)c=getchar();
	return c;
    }
}io;
int main(){
    for(int i(0);i<N;i++)
        fat[i]=i,front[i]=0,num[i]=1;
    io.read(t);
    while(t--){
        opt=io.get(),io.read(x),io.read(y);
        int fx=find(x),fy=find(y);
        switch (opt){
        case 'M':{
            unionn(fx,fy);
            break;
            }
        case 'C':{
            fx!=fy?io.write(-1):io.write(abs(front[x]-front[y])-1);
            putchar(10);
            break;
            }
        }
    }
    return 0;
}