#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<cstring>
int t,a,b;
char ans[100],temp[20],tot;
int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%s",&temp);
        if(isalpha(temp[0])){
	    tot=temp[0];
	    scanf("%d%d",&a,&b);
        }
        else{
        a=atoi(temp);
        scanf("%d",&b);
        }
        switch(tot){
        case 'a':
            sprintf(ans,"%d+%d=%d",a,b,a+b);
            break;
        case 'b':
            sprintf(ans,"%d-%d=%d",a,b,a-b);
            break;
        case 'c':
            sprintf(ans,"%d*%d=%d",a,b,a*b);
            break;
        }
        printf("%s\n%d\n",ans,strlen(ans));
    }
    return 0;
}