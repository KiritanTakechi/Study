#include<cstdio>
#include<algorithm>
long long n,p(1),a[1045],b[1045];
bool s(1);
int main(){
	scanf("%lld",&n);
	if(n==0){printf("0");return 0;}
	a[0]=b[0]=1;
	for(int i(0);i<n;i++){
		for(int j(0);j<1045;j++){
			b[j]=a[j]+b[j];
			if(b[j]>9){
				b[j]%=10;
				b[j+1]++;
			}
			std::swap(a[j],b[j]);
		}
	}
	for(int i(1044);i>=0;i--){
		if(b[i]!=0)s=0;
		if(s==0)printf("%lld",b[i]);
	}
	return 0;
}