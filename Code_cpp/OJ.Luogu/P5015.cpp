#include<cstdio>
#include<cctype>
#include<cstring>
char ch[10];
int ans;
int main(){
    fgets(ch,10,stdin);
    int len=strlen(ch);
    for(int i(0);i<len;i++)
        if(isalnum(ch[i]))ans++;
    printf("%d",ans);
    return 0;
}