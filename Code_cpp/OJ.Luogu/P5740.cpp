#include<cstdio>
#include<string>
class student{
    public:
        std::string name;
        int chinese,math,english,sum;
};
int n,maxres,p;
int main(){
    student *res;
    scanf("%d",&n);
    res=new student[n];
    for(int i(0);i<n;i++){
        scanf("%s%d%d%d",&res[i].name[0],&res[i].chinese,&res[i].math,&res[i].english);
        res[i].sum=res[i].chinese+res[i].math+res[i].english;
        if(maxres<res[i].sum){
            maxres=res[i].sum;
            p=i;
        }
    }
    printf("%s %d %d %d",&res[p].name[0],res[p].chinese,res[p].math,res[p].english);
    delete[]res;
    return 0;
}