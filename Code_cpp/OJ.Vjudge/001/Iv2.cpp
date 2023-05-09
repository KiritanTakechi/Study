#include<iostream>
#include<algorithm>
#include<map>
#define N 1000100
using namespace std;
struct node{int a,b;}w[N];
int dp[N];
map<int,bool> mp;
map<int,int> power;
int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,ans,len;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>w[i].a>>w[i].b;
	for(int i=1;i<=n;i++){
		mp[w[i].a]=1;
		power[w[i].a]=w[i].b;
		len=max(len,w[i].a);
	}
	if(mp[0])dp[0]=1;
	for(int i=0;i<=len;i++){
		if(mp[i])
			if(int p=power[i];p>=i)dp[i]=1;
			else dp[i]=dp[i-p-1]+1;
		else dp[i]=dp[i-1];
		ans=max(ans,dp[i]);
	}
	cout<<n-ans;
	return 0;
}