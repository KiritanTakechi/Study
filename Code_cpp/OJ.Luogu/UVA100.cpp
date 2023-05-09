#include<cstdio>
#include<map>
const int min(int a,int b){return a<b?a:b;}
std::map<int,int>m;
void solve(int x){
    int t=x&1?x*3+1:x>>1;
    if(!m[t])solve(t);
    m[x]=m[t]+1;
}
int main(){
    m[1]=1;
    for(int i,j;~scanf("%d%d",&i,&j);){
        int ans=0;
        for(int k=min(i,j),l=i+j-k;k<=l;k++){
            if(!m[k])solve(k);
            if(ans<m[k])ans=m[k];
        }
        printf("%d %d %d\n",i,j,ans);
    }
    return 0;
}