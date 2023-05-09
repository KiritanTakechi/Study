#include<cstdio>
#include<string>
#include<cstring>
#include<ctype.h>
std::string s;
int main(){
    s.resize(100);
    scanf("%s",&s[0]);
    int len=strlen(&s[0]);
    for(int i(0);i<len;i++)
        s[i]=toupper(s[i]);
    printf("%s",&s[0]);
    return 0;
}