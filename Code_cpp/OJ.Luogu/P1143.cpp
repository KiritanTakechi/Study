#include<cstdio>
#include<locale>
#include<cstdlib>
#include<charconv>
using namespace std;
int n,m;
char s[64],t[64];
int main(){
    scanf("%d%s%d",&n,s,&m);
    to_chars(t,t+64,strtol(s,nullptr,n),m);
    use_facet<ctype<char>>(locale()).toupper(t,t+64);
    puts(t);
    return 0;
}