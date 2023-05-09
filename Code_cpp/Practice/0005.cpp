#include<iostream>
#include<algorithm>
using namespace std;
class student{
    public:
        string name;
        int soc;
};
int n;
int main(int argc,char* argv[]){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    student*stu=new student[n];
    for(int i=0;i<n;i++)
        cin>>stu[i].name>>stu[i].soc;
    sort(stu,stu+n,[&stu](student a,student b)->bool{return a.soc>b.soc;});
    for(int i=0;i<n;i++){
        cout<<stu[i].name<<' '<<stu[i].soc<<' ';
        if(!stu[i].soc)cout<<"Bad"<<endl;
        else if(stu[i].soc<200)cout<<"Not good"<<endl;
        else if(stu[i].soc<300)cout<<"Bronze medal"<<endl;
        else if(stu[i].soc<400)cout<<"Silver medal"<<endl;
        else cout<<"Gold medal"<<endl;
    }
    return 0;
}