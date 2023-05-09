#include<cstdio>
long long heap[50000],len,n,slab,tot,ans;
template<class T>
void swap(T &a,T &b){
    T temp;
    temp=a;a=b;b=temp;
}
void insert(int a){
    heap[++len]=a;
    int p=len;
    while (p>1&&heap[p>>1]>heap[p])swap<long long>(heap[p>>1],heap[p]),p>>=1;
}
void del(){
	heap[1]=heap[len--];heap[len+1]=0;
	int p=1,son=p<<1;
	while(son<=len){
		if(son<len&&heap[son]>heap[son+1])son++;
		if(heap[p]<=heap[son])break;
		swap<long long>(heap[p],heap[son]);
		p=son;
		son=p<<1;
	}
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
}io;
int main(){
    io.read(n);
    for(int i(0);i<n;i++)io.read(slab),insert(slab);
    for(int i(0);i<n-1;i++)tot=heap[1],del(),tot+=heap[1],del(),ans+=tot,insert(tot);
    io.write(ans);
    return 0;
}