#include<cstdio>
#define N 500000
template<class T>
class Binary_Indexed_Tree{
private:
    int n;
    T t[N+3];
public:
    Binary_Indexed_Tree(int nt=N):n(nt){}
    void add(int x,T k){while (x<=n){t[x]+=k;x+=x&-x;}}
    T sum(int x){T ans(0);while(x!=0){ans+=t[x];x-=x&-x;}return ans;}
};
class IO{
    public:
    int read(){
    int a=0,f=1;char c=getchar();
    while(c<'0'){if(c=='-')f=-1;c=getchar();}
    while(c>='0')a=a*10+(c^48),c=getchar();
    return f*a;
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
int n=fast.read(),m=fast.read(),a,b,opt;
Binary_Indexed_Tree<int> tree(n);
int main(){
    for(int i(1);i<=n;i++){
        tree.add(i,fast.read());
    }
    while (m--){
        opt=fast.read();a=fast.read();b=fast.read();
        switch (opt){
        case 1:
            tree.add(a,b);
            break;
        case 2:
            fast.write(tree.sum(b)-tree.sum(a-1));
            putchar(10);
            break;
        }
    }
    return 0;
}