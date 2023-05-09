#include<stdio.h>
int a,n;
int main(void){
    scanf("%d%d",&a,&n);
    if(!n){printf("0");return 0;}
    int* ans=new int[n]();
    for(int i=0,b=0;i<n;i++){
        for(int j=0;j<=i;j++){
            ans[j]+=a;
            if(ans[j]>9){ans[j]%=10;ans[j+1]++;}
        }
    }
    for(int i=n-1;i>=0;i--){
        printf("%d",ans[i]);
    }
    return 0;
}