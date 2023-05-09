#include<iostream>
int read()
{
	int a=0;char c;
	while((c=getchar())<'0');
	while(c>='0')a=a*10+(c^48),c=getchar();
	return a;
}
//char('-')=45
int read()
{
	int a=0,f=1;char c=getchar();
	while(c<'0'){if(c=='-')f=-1;c=getchar();}
	while(c>='0')a=a*10+(c^48),c=getchar();
	return f*a;
}

double read()
{
	double a=0,l=0.1;
	int f=1;char c=getchar();
	while(c<'0'||c>'9'){if(c=='-')f=-1;c=getchar();}
	while(c>='0'&&c<='9')a=a*10+c-48,c=getchar();
	if(c=='.')c=getchar();else goto end;
	while(c>='0'&&c<='9') a+=(c-48)*l,l/=10,c=getchar();
	end:return f*a;
}

char get()
{
	unsigned char c=getchar();
	while(c<=32)c=getchar();
	return c;
}

char peek()
{
	char c=getchar();
	ungetc(c,stdin);
	return c;
}

void clear()
{
	unsigned char c;
	while((c=getchar())<=32);
	ungetc(c,stdin);
}

int getl(char*a)
{
	char c;int i=0;
	while((c=getchar())<33);
	while(c>32)a[i++]=c,c=getchar();
	//a[i]=0;
	return i;
}

void getl(char*a)
{
	char c;int i=-1;
	while((c=getchar())<33);
	while(c>32)a[++i]=c,c=getchar();
}

void write(int x)
{
	if(x>9)write(x/10);
	putchar(48|(x%10));
}

void _write(int x)
{
	if(x>9)_write(x/10);
	putchar(48|(x%10));
}
void write(int x)
{
	if(x<0)putchar('-'),_write(-x);
	else _write(x);
}

void _write(int x)
{
	if(x>9)_write(x/10);
	putchar(48|(x%10));
}
void write(int x)
{
	if(x==0xffffffff){printf("-2147483648");return;}
	if(x<0)putchar('-'),_write(-x);
	else _write(x);
}

ios::sync_with_stdio(0);
cin.tie(0);

struct io
{
	char ibuf[900<<20],*s;
	io(){fread(s=ibuf,1,900<<20,stdin);}
	inline int read()
	{
		int u=0;
		while(*s<=48)s++;
		while(*s>=48)u=u*10+(*s^48),s++;
		return u;
	}
}ip;

namespace io {
    const int SIZE=(1<<21)+1;
    char ibuf[SIZE],*iS,*iT,obuf[SIZE],*oS=obuf,*oT=oS+SIZE-1,c,qu[55]; int f,qr;
    inline char gc() { return (iS==iT?(iT=(iS=ibuf)+fread(ibuf,1,SIZE,stdin),(iS==iT?EOF:*iS++)):*iS++); }
    inline void flush() {
        fwrite(obuf,1,oS-obuf,stdout);
        oS=obuf;
    }
    inline void putc(char x) {
        *oS++=x;
        if (oS==oT) flush();
    }
    template <class I>
    inline void read(I &x) {
        for (f=1,c=gc();c<'0'||c>'9';c=gc()) if (c=='-') f=-1;
        for (x=0;c<='9'&&c>='0';c=gc()) x=x*10+(c&15); x*=f;
    }
    template <class I>
    inline void print(I x) {
        if (!x) putc('0'); if (x<0) putc('-'),x=-x;
        while (x) qu[++qr]=x%10+'0',x/=10;
        while (qr) putc(qu[qr--]);
    }
}
using io::gc;
using io::read;
using io::print;
using io::putc;
