#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
std::string s;
int cnt[260],maxn,minn(100);
bool is_prime(const int n){
	if(n<=2)return n==2;
	if(!(n&1))return 0;
	const int e=sqrt(n);
	for(int i=3;i<=e;i+=2)
		if(n%i==0)return 0;
	return 1;
}
int main(){
    s.resize(1000);
    scanf("%s",&s[0]);
    int len=strlen(&s[0]);
    for(int i(0);i<len;i++)
        cnt[int(s[i])-'a']++;
    for(int i(0);i<26;i++){
        if(cnt[i])minn=min(minn,cnt[i]);
        maxn=max(maxn,cnt[i]);
    }
    if(is_prime(maxn-minn))printf("Lucky Word\n%d",maxn-minn);
    else printf("No Answer\n0");
    return 0;
}