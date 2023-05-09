#include<cstdio>
int n,i,j,k,a,b;
int main(){
    scanf("%d%d",&n,&k);
	b=(1+n)*n/2;
	for(i=k;i<=n;a+=i,j++,i+=k);
	printf("%.1lf %.1lf",a/(j*1.0),(b-a)/((n-j)*1.0));
	return 0;
}