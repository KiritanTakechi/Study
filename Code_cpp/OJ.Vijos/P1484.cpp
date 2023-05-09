#include<cstdio>
char c,s[13],*p=s,end;
int n[9],top,sum;
int main(int argc,char *argv[]){
    for(int i(0);i<12;i++){
        scanf("%c",&c);
        p+=sprintf(p,"%c",c);
        if(c>='0'&&c<='9')n[top++]=c-'0';
    }
    top=0;
    for(int num:n)sum+=num*(++top);
    scanf("%c",&end);
    if(sum%11==int(end-'0'))printf("Right");
    else if(sum%11==10&&end=='X')printf("Right");
    else printf("%s%c",s,sum%11==10?'X':(sum%11)+'0');
    return 0;
}