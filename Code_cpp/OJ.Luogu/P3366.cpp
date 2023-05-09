#include<cstdio>
#include<algorithm>
int fat[5050],n,m,tot;
class point{
    public:
    int x,y,v;
}t[505000];
void quicksort(int l,int r){
	int mid=t[l+r>>1].v,i=l,j=r;
	do{
		while(t[i].v<mid)i++;
		while(t[j].v>mid)j--;
		if(i<=j){std::swap(t[i],t[j]);i++,j--;}
	}while(i<=j);
	if(l<j)quicksort(l,j);
	if(r>i)quicksort(i,r);
}
int father(int x){
	if(fat[x]!=x)fat[x]=father(fat[x]);
	return fat[x];
}
void unionn(int x,int y){
	int fa=father(x);
	int fb=father(y);
	if(fa!=fb)fat[fa]=fb;
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
    io.read(n),io.read(m);
	for(int i(0);i<m;i++)
        io.read(t[i].x),io.read(t[i].y),io.read(t[i].v);
	for(int i(0);i<n;i++)fat[i]=i;
	quicksort(0,m-1);
	for(int i(0);i<m;i++)
		if(father(t[i].x)!=father(t[i].y)){
			unionn(t[i].x,t[i].y);
			tot+=t[i].v;
		}
    int judge=father(0);
    for(int i(0);i<m;i++)
        if(father(i)!=judge){printf("orz");return 0;};
	io.write(tot);
    return 0;
}