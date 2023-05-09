#include<iostream>
#include<algorithm>
using namespace std;
int n;
class student{
    public:
        int id,chinese,math,english,sum=0;
};
int main(int argc,char *argv[]){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    student *stu=new student[n];
    for(int i(0);i<n;i++){
        stu[i].id=i+1;
        cin>>stu[i].chinese>>stu[i].math>>stu[i].english;
        stu[i].sum+=(stu[i].chinese+stu[i].math+stu[i].english);
    }
    sort(stu,stu+n,[&stu](student a,student b)->bool{if(a.sum!=b.sum)return a.sum>b.sum;else if(a.chinese!=b.chinese)return a.chinese>b.chinese;else return a.id<b.id;});
    for(int i(0);i<5;i++)
        cout<<stu[i].id<<' '<<stu[i].sum<<endl;
    delete[] stu;
    return 0;
}