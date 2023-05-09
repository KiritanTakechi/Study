#include<cstdio>
#define swap(x,y) int t=x;x=y,y=t;
int n,m,x[2000000];
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
	fast.read(n),fast.read(m);
	for(int i(0);i<m;i++)fast.read(x[i]);
	quicksort(0,m-1);
	for(int i(0);i<m;i++){fast.write(x[i]);putchar(32);}
    return 0;
}
