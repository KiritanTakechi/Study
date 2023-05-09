#include<cstdio>
char get(){
	unsigned char c=getchar();
	while(c<=32)c=getchar();
	return c;
}
void getl(char*a){
	char c;int i=-1;
	while((c=getchar())<33);
	while(c>32)a[++i]=c,c=getchar();
}
int read(){
	int a=0;char c;
	while((c=getchar())<'0');
	while(c>='0')a=a*10+(c^48),c=getchar();
	return a;
}
char f[100005],name[100005][12];
int main(){
	int n,m,x=0;bool a;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)f[i]=get()&1,getl(name[i]);
	for(int i=0;i<m;i++){
		a=get()&1;
		if(a^f[x])x=(x+read())%n;
		else x=(x-read()+n)%n;
	}
	printf("%s",name[x]);
}