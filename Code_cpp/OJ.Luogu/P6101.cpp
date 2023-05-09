#include<cstdio>
#include<string>
#include<iostream>
#define max(a,b) a>b?a:b
#define int long double
std::string s;
int l,nmax,len,ans,temp[1000005];
signed main(){
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cin>>s>>l;
    len=s.length();
    if(len>=l){
        printf("0");
        return 0;
    }
    for(int i(0);i<len;i++){
        temp[s[i]]++;
        nmax=max(nmax,temp[s[i]]);
    }
    while (len<l){
        len+=nmax;
        nmax*=2;
        ans++;
    }
    std::cout<<ans;
    return 0;
}