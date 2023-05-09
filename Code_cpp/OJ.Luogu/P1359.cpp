#include<cstdio>
#define N 0x7ffffff
int head[N],tot;
class edge{
    public:
	    int to,w,next;
}edge[N];
void addedge(int u,int v,int w){
	edge[tot].to=v;
	edge[tot].w=w;
	edge[tot].next=head[u];
	head[u]=tot++;
}