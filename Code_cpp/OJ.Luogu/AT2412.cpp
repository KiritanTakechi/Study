#include<cstdio>
const int max(int a,int b){return a>b?a:b;}
int n,k,ans;
int main(){
    scanf("%d%d",&n,&k);
    int *a=new int[n];
    scanf("%d",&a[0]);
    for(int i(1);i<n;i++){
        scanf("%d",&a[i]);
        a[i]+=a[i-1];
    }
    for(int i(k);i<n;i++){
        ans=max(ans,a[i]-a[i-k]);
    }
    printf("%d\n",ans);
    return 0;
}