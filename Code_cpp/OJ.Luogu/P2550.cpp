#include<cstdio>
#include<set>
int n,x,t,ans[8];
std::set<int> c;
int main(){
    scanf("%d",&n);
    for(int i(0);i<7;i++){
        scanf("%d",&x);
        c.insert(x);
    }
    for(int i(0);i<n;i++){
        for(int j(0);j<7;j++){
            scanf("%d",&x);
            t+=c.count(x);
        }
        ans[t]++;
        t=0;
    }
    for(int i(7);i>0;i--){
        printf("%d ",ans[i]);
    }
    return 0;
}