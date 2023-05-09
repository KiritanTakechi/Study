#include<cstdio>
#define N 5000000
template<class T>
class Binary_Indexed_Tree{
private:
    int n;
    T t[N+3];
public:
    Binary_Indexed_Tree(int nt=N):n(nt){}
    void add(int x,T k){while (x<=n){t[x]+=k;x+=x&-x;}}
    T find(int x){int ans(0);while(x){ans+=t[x];x-=x&-x;}return ans;}
};
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
int n=read(),m=read(),a,b,k,opt,sou[N];
Binary_Indexed_Tree<int> tree(n);
int main(){
    for(int i(1);i<=n;i++){
        sou[i]=read();
        tree.add(i,sou[i]-sou[i-1]);
    }
    while (m--){
        opt=read();
        switch (opt){
        case 1:
            a=read(),b=read(),k=read();
            tree.add(a,k);
            tree.add(b+1,-k);
            break;
        case 2:
            a=read();
            write(tree.find(a));
            putchar(10);
            break;
        }
    }
    return 0;
}