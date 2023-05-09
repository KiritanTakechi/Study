#include<cstdio>
#include<cmath>
int i,n,a[1000][3],sum[1000],ans;
int main(){
    for(scanf("%d",&n);i<n;++i){
        scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
        sum[i]=a[i][0]+a[i][1]+a[i][2];
    }
    for(i=0;i<n;++i)
		for(int j(i+1);j<n;++j)
			if(abs(a[i][0]-a[j][0])<=5&&abs(a[i][1]-a[j][1])<=5&&abs(a[i][2]-a[j][2])<=5&&abs(sum[i]-sum[j])<=10)
                ans++;
    printf("%d",ans);
    return 0;
}