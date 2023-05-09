#include<cstdio>
int p;
char n[120];
int main(){
    scanf("%d",&p);
    for(int i(0);i<p;i++)
        scanf(" %c",&n[i]);
    for(int i(0);i<5;i++){
        for(int j(0);j<p;j++){
            if(i==0){
                if(n[j]=='0')printf("XXX");
                if(n[j]=='1')printf("..X");
                if(n[j]=='2')printf("XXX");
                if(n[j]=='3')printf("XXX");
                if(n[j]=='4')printf("X.X");
                if(n[j]=='5')printf("XXX");
                if(n[j]=='6')printf("XXX");
                if(n[j]=='7')printf("XXX");
                if(n[j]=='8')printf("XXX");
                if(n[j]=='9')printf("XXX");
                if(j<p-1)printf(".");
            }
            if(i==1){
                if(n[j]=='0')printf("X.X");
                if(n[j]=='1')printf("..X");
                if(n[j]=='2')printf("..X");
                if(n[j]=='3')printf("..X");
                if(n[j]=='4')printf("X.X");
                if(n[j]=='5')printf("X..");
                if(n[j]=='6')printf("X..");
                if(n[j]=='7')printf("..X");
                if(n[j]=='8')printf("X.X");
                if(n[j]=='9')printf("X.X");
                if(j<p-1)printf(".");
            }
            if(i==2){
                if(n[j]=='0')printf("X.X");
                if(n[j]=='1')printf("..X");
                if(n[j]=='2')printf("XXX");
                if(n[j]=='3')printf("XXX");
                if(n[j]=='4')printf("XXX");
                if(n[j]=='5')printf("XXX");
                if(n[j]=='6')printf("XXX");
                if(n[j]=='7')printf("..X");
                if(n[j]=='8')printf("XXX");
                if(n[j]=='9')printf("XXX");
                if(j<p-1)printf(".");
            }
            if(i==3){
                if(n[j]=='0')printf("X.X");
                if(n[j]=='1')printf("..X");
                if(n[j]=='2')printf("X..");
                if(n[j]=='3')printf("..X");
                if(n[j]=='4')printf("..X");
                if(n[j]=='5')printf("..X");
                if(n[j]=='6')printf("X.X");
                if(n[j]=='7')printf("..X");
                if(n[j]=='8')printf("X.X");
                if(n[j]=='9')printf("..X");
                if(j<p-1)printf(".");
            }
            if(i==4){
                if(n[j]=='0')printf("XXX");
                if(n[j]=='1')printf("..X");
                if(n[j]=='2')printf("XXX");
                if(n[j]=='3')printf("XXX");
                if(n[j]=='4')printf("..X");
                if(n[j]=='5')printf("XXX");
                if(n[j]=='6')printf("XXX");
                if(n[j]=='7')printf("..X");
                if(n[j]=='8')printf("XXX");
                if(n[j]=='9')printf("XXX");
                if(j<p-1)printf(".");
            }
        }
    printf("\n");
    }
    return 0;
}