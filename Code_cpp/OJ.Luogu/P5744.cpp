#include<iostream>
#include<string>
#include<cstring>
using namespace std;
class student{
public:
    string name;
    int age,soc;
}student[30];
int n,ans;
int main(){
    cin>>n;
    for(int i(0);i<n;i++){
        cin>>student[i].name>>student[i].age>>student[i].soc;
        ans=(student[i].soc*1.2)<=600?(student[i].soc*1.2):600;
        cout<<student[i].name<<' '<<student[i].age+1<<' '<<ans<<endl;
    }
    return 0;
}
