#include<iostream>
#include<algorithm>
using namespace std;
int n,sum;
class student{
    public:
        string name;
        int id,sres,cres,cnt,prize=0;
        char a,b;
};
int main(int argc,char *argv[]){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    student *stu=new student[n];
    for(int i(0);i<n;i++){
        cin>>stu[i].name>>stu[i].sres>>stu[i].cres>>stu[i].a>>stu[i].b>>stu[i].cnt;
        stu[i].id=i;
        if(stu[i].sres>80&&stu[i].cnt>0)stu[i].prize+=8000;
        if(stu[i].sres>85&&stu[i].cres>80)stu[i].prize+=4000;
        if(stu[i].sres>90)stu[i].prize+=2000;
        if(stu[i].sres>85&&stu[i].b=='Y')stu[i].prize+=1000;
        if(stu[i].cres>80&&stu[i].a=='Y')stu[i].prize+=850;
        sum+=stu[i].prize;
    }
    sort(stu,stu+n,[](student a,student b){if(a.prize==b.prize)return a.id<b.id;else return a.prize>b.prize;});
    cout<<stu[0].name<<endl<<stu[0].prize<<endl<<sum;
    delete[] stu;
    return 0;
}