#include<cstdio>
void getl(char*a){
	char c;int i=-1;
	while((c=getchar())<33);
	while(c>32)a[++i]=c,c=getchar();
}
int n;char c[10][10],d[10][10];
bool check(bool x,bool y,bool z){
    for(int i(0),u=y?0:n-1;i<n;i++,y?u++:u--)
        for(int j(0),v=z?0:n-1;j<n;j++,z?v++:v--)
            if(c[i][j]!=(x?d[u][v]:d[v][u]))return 0;
    return 1;
}
int main(){
	scanf("%d",&n);
	for(int i(0);i<n;i++)getl(d[i]);
	for(int i(0);i<n;i++)getl(c[i]);
	if(check(0,1,0)){putchar('1');return 0;}
	if(check(1,0,0)){putchar('2');return 0;}
	if(check(0,0,1)){putchar('3');return 0;}
	if(check(1,1,0)){putchar('4');return 0;}
	if(check(1,0,1)||check(0,0,0)||check(0,1,1)){putchar('5');return 0;}
	if(check(1,1,1)){putchar('6');return 0;}
	putchar('7');
    return 0;
}