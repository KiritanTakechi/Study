#include<cstdio>
int f[100000],re[100000];
int find(int x){
    int fat=f[x];
    if (x!=fat) {f[x]=find(fat);re[x]=(re[x]+re[fat])%3;return f[x];}
    else return fat;
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
int n,k,x,y,opt,ans;
int main(){
    io.read(n),io.read(k);
    for(int i(0);i<n;i++)f[i]=i,re[i]=0;
    while(k--){
        io.read(opt),io.read(x),io.read(y);
        if((x>n||y>n)||(opt==2&&x==y)){ans++;continue;}
        switch(opt){
            case 1:{
   		        int f1=find(x),f2=find(y);
   		        if(f1==f2&&re[x]!=re[y])ans++;
   		        else if(f1!=f2){f[f1]=f2;re[f1]=(3-re[x]+re[y])%3;}
                break;
            }
            case 2:{
                int f1=find(x),f2=find(y);
   		        if(f1==f2){
   			        int rela=(re[x]-re[y]+3)%3;
   			        if(rela!=1)ans++;
   		        }
   		        else{
                    int f1=find(x),f2=find(y);
   		            f[f1]=f2;re[f1]=(3-re[x]+re[y]+1)%3;
                }
                break;
            }
        }
    }
    io.write(ans);
    return 0;
}