#include<iostream>
#include<cstring>
#include<vector>
#define N 500000
using namespace std;
int getl(char*s){
    int i=-1;char c=getchar();
    while(c<33)c=getchar();
    while(c>32)s[++i]=c,c=getchar();
    s[++i]=0;
    return i;
}
char s1[N],s2[N];
int prefix[N];
int main(int argc,char* argv[]){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int len1=getl(s1+1),len2=getl(s2+1);
    for(int i=2,j=0;i<=len2;i++){
        while(j&&s2[j+1]!=s2[i])j=prefix[j];
        if(s2[j+1]==s2[i])j++;
        prefix[i]=j;
    }
    for(int i=1,j=0;i<=len1;i++){
        while(j&&s2[j+1]!=s1[i])j=prefix[j];
        if(s2[j+1]==s1[i])j++;
        if(j==len2)j=prefix[j],cout<<i-len2+1<<endl;
    }
    for(int i=1;i<=len2;i++)cout<<prefix[i]<<' ';
    return 0;
}