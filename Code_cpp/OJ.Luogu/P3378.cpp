#include<cstdio>
#include<algorithm>
using namespace std;
int heap[1000000],len;
void read(int&a){
	char c=getchar();a=0;int f=1;
	while(c<'0'||c>'9')if(c=='-')f=-1,c=getchar();
	while(c>='0'&&c<='9')a=(a<<3)+(a<<1)+(c^48),c=getchar();
	a*=f;
}
void insert(int a){
    int p=++len;
    while(p>1&&heap[p>>1]>a)heap[p]=heap[p>>1],p>>=1;
    heap[p]=a;
}
void del(){
	heap[1]=heap[len--];heap[len+1]=0;
	int p=1,son=p<<1;
	while(son<=len){
		if(son<len&&heap[son]>heap[son+1])son++;
		if(heap[p]<=heap[son])break;
		swap<int>(heap[p],heap[son]);
		p=son;
		son=p<<1;
	}
}
int main(){
    int opt,num,n;
    read(n);
    while (n--){
        read(opt);
        switch (opt){
            case 1:read(num);insert(num);break;
            case 2:printf("%d\n",heap[1]);break;
            case 3:del();
        }
    }
    return 0;
}