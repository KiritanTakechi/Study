#include<cstdio>
#include<string>
#include<iostream>
std::string a,b;
int main(){
    std::ios_base::sync_with_stdio(false);
    while(std::cin>>a>>b){
	int la=a.size();
	int lb=b.size();
    int p(0);
    for(int i(0);i<lb;++i)
        if(a[p]==b[i])++p;
    p==la?printf("Yes\n"):printf("No\n");
    }
    return 0;
}