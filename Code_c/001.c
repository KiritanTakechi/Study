#include<stdio.h>
void bubble_sort(int arr[],int len){
    int i,j,temp;
    for(i=0;i<len-1;i++)
        for(j=0;j<len-1-i;j++)
            if (arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
}
int soc[10000],id[10000],n,m;
int main(){
    printf("请输入班级人数:");
    scanf("%d",&n);
    printf("\n请输入班级人数的数量级:");
    scanf("%d",&m);
    printf("\n依次输入id 成绩:");
    for(int i=0;i<n;i++){
        scanf("%d%d",&id[i],&soc[i]);
        soc[i]=(soc[i]*m*10)+id[i];
    }
    bubble_sort(soc,n);
    for(int i=0;i<n;i++){
        printf("\n%d %d",soc[i]%(m*10),soc[i]/(m*10));
    }
    return 0;
}