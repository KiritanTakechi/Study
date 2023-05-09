#include<cstdio>
int n;
int main(){
    int *a;
    scanf("%d",&n);
    a=new int[n];
    for(int i=0;i<n;i++)
        scanf("%d",&*(a+i));
    for(int i=0;i<n;i++){
        int ans=0;
        for(int j=0;j<=i;j++)
            if(*(a+j)<*(a+i))ans++;
        printf("%d ",ans);
    }
    delete[]a;
    return 0;
}