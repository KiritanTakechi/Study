#include<cstdio>
#include<algorithm>
using namespace std;
class IO{
    public:
    template<typename I>
    void read(I&a){
	char c=getchar();a=0;long long f=1;
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
class number{
    public:
        long long id,num;
        bool jout=1;
};
long long t;
int main(int argc,char* argv[]){
    io.read(t);
    while(t--){
        long long n,tnum;
        io.read(n);
        number *num=new number[n];
        for(long long i(0);i<n;i++){
            io.read(tnum);
            (num+i)->id=i;
            (num+i)->num=tnum;
        }
        sort(num,num+n,[&num](number a,number b)->bool{if(a.num==b.num)return a.id<b.id;else return a.num<b.num;});
        for(long long i(1);i<n;i++){
            if((num+i)->num==(num+i-1)->num)(num+i)->jout=0;
        }
        sort(num,num+n,[&num](number a,number b)->bool{return a.id<b.id;});
        for(long long i(0);i<n;i++){
            if((num+i)->jout){
                io.write((num+i)->num);
                putchar(32);
            }
        }
        delete[] num;
        putchar(10);
    }
    return 0;
}