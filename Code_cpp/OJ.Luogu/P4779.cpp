#include<cstdio>
#include<queue>
#define N 0x7FFFFFFF
int head[1000000],cnt,m,n,s;
long long ans[1000000];
bool vis[1000000];
class edge{
    public:
	    int to;
	    int nextt;
	    int wei;
}edge[1000000];
void addedge(int x,int y,int z){
	edge[++cnt].to=y;
	edge[cnt].wei=z;
	edge[cnt].nextt=head[x];
	head[x]=cnt;
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
std::priority_queue< std::pair<int,int> > que;
int main(){
	io.read(m),io.read(n),io.read(s);
	for(int i=1;i<=n;i++)
        ans[i]=N;
	ans[s]=0;
    que.push(std::make_pair(0,s));
	for(int i=1;i<=n;i++){
		int a,b,c;
		io.read(a),io.read(b),io.read(c);
		addedge(a,b,c);
	}
	while(!que.empty()){
        int pos=que.top().second;
        que.pop();
        if(vis[pos]) continue;
		vis[pos]=1;
		for(int i=head[pos];i;i=edge[i].nextt){
            int y=edge[i].to,l=edge[i].wei;
            if(ans[y]>ans[pos]+l){
                ans[y]=ans[pos]+l;
                que.push(std::make_pair(-ans[y],y));
            }
        }
	}
	for(int i=1;i<=m;i++){
        io.write(ans[i]);
        putchar(32);
    }
	return 0;
}