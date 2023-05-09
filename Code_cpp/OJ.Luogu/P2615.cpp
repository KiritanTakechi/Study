#include<cstdio>
int k,n[40][40];
int main(){
    scanf("%d",&k);
    for(int num(1),i(1),j(k/2+1);num<=k*k;num++){
        n[i][j]=num;
        if(!(num%k)){
            i++;
            if(i==k+1)i=1;
        }
        else{
            i--;
            j++;
        }
        if(!i) i=k;
        if(j==k+1)j=1;
    }
    for(int i=1;i<=k;i++){
		for(int j=1;j<=k;j++)
            printf("%d ",n[i][j]);
        printf("\n");
    }
    return 0;
}