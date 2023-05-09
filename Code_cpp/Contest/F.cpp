#include<iostream>
#include<algorithm>
using namespace std;
class student{
    public:
        int id,begt,limt;
};
int t;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>t;
    while(t--){
        int n,time=0;
        cin>>n;
        student*stu=new student[n];
        int*ans=new int[n];
        for(int i=0;i<n;i++){
            stu[i].id=i;
            cin>>stu[i].begt>>stu[i].limt;
        }
        sort(stu,stu+n,[](student a,student b)->bool{
            if(a.begt==b.begt)return a.id<b.id;
            else return a.begt<b.begt;
        });
        for(int i=0;i<n;i++){
            if(stu[i].begt-time>0)time+=stu[i].begt-time;
            if(time-stu[i].begt>stu[i].limt){
                ans[stu[i].id]=0;
                continue;
            }
            ans[stu[i].id]=time;
            time++;
        }
        for(int i=0;i<n;i++)
            cout<<ans[i]<<' ';
        cout<<endl;
        //delete[] stu,ans;
    }
    return 0;
}