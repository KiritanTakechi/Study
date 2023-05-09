#include<cstdio>
#define swap(x,y) int t=x;x=y,y=t;
int n,x[100000];
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
void quicksort(int l,int r){
	int mid=x[l+r>>1],i=l,j=r;
	do{
		while(x[i]<mid)i++;
		while(x[j]>mid)j--;
		if(i<=j){swap(x[i],x[j]);i++,j--;}
	}while(i<=j);
	if(l<j)quicksort(l,j);
	if(r>i)quicksort(i,r);
}
int main(){
	io.read(n);
	for(int i(0);i<n;i++)io.read(x[i]);
	quicksort(0,n-1);
	for(int i(0);i<n;i++){io.write(x[i]);putchar(32);}
    return 0;
}
