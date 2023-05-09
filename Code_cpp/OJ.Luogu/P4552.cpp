#include<iostream>
#include<algorithm>
using namespace std;
long long n,a[100005],dif[100005],x,y;
int main(){
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
		dif[i]=a[i]-a[i-1];
	}
	for(long long i=2;i<=n;i++){
        if(dif[i]>0)x+=dif[i];
        else y-=dif[i];
	}
	cout<<max(x,y)<<endl<<abs(x-y)+1<<endl;
	return 0;
}