#include<cstdio>
#include<string>
int abs(int x){return x<0?-x:x;}
class student{
    public:
        std::string name;
        int chinese,math,english,sum;
};
int n;
int main(){
    student *res;
    scanf("%d",&n);
    res=new student[n];
    for(int i(0);i<n;i++){
        scanf("%s%d%d%d",&res[i].name[0],&res[i].chinese,&res[i].math,&res[i].english);
        res[i].sum=res[i].chinese+res[i].math+res[i].english;
    }
    for(int i(0);i<n;i++)
        for(int j(i+1);j<n;j++)
            if(abs(res[i].chinese-res[j].chinese)<=5&&abs(res[i].math-res[j].math)<=5&&abs(res[i].english-res[j].english)<=5&&abs(res[i].sum-res[j].sum)<=10)printf("%s %s\n",&res[i].name[0],&res[j].name[0]);
    delete[]res;
    return 0;
}