#include<cstdio>
int m[15][15];
int n,k=1,x=1,y;
int main(){
	scanf("%d",&n);
	while(k<=n*n){
		while(y<n&&!m[x][y+1])m[x][++y]=k++;
		while(x<n&&!m[x+1][y])m[++x][y]=k++;
		while(y>1&&!m[x][y-1])m[x][--y]=k++;
		while(x>1&&!m[x-1][y])m[--x][y]=k++;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)printf("%3d",m[i][j]);
		putchar(10);
	}
	return 0;
}