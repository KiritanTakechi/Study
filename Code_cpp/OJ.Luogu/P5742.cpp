#include<cstdio>
class student{
    public:
        int num,ares,qres;
};
int n;
int main(){
    student *res;
    scanf("%d",&n);
    res=new student[n];
    for(int i(0);i<n;i++)
        scanf("%d%d%d",&res[i].num,&res[i].ares,&res[i].qres);
    for(int i(0);i<n;i++)
        ((res[i].ares+res[i].qres>140)&&(res[i].ares*0.7)+(res[i].qres*0.3)>=80)?printf("Excellent\n"):printf("Not excellent\n");
    delete[]res;
    return 0;
}