#include<iostream>
#include<iomanip>
using namespace std;
const double min(double a,double b){return a<b?a:b;}
int n;
double d1,d2,c,pr,a,b,fuel,ans;
class node{
    public:
        double s=0,pri=0;
        node* next;
};
node *head=new node,*tail=new node;
void createlink(double x,double y){
    node* p=new node;
    *p={x,y,nullptr};
    head->next==nullptr?head->next=p:tail->next=p;
    tail=p;
}
int main(int argc,char* argv[]){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>d1>>c>>d2>>pr>>n;
    *head={0,pr,nullptr};
    for(int i(0);i<n;i++){
        cin>>a>>b;
        createlink(a,b);
    }
    node *p=new node,*tmp=new node;
    *tmp={d1,1000,nullptr};
    tail->next=tmp;tail=tmp;
    p=head;
    double _pri,_s;
    while(p->next!=nullptr){
        bool j=0;
        double minn=600;
        node* _p=new node;
        _p=p;//_p为探测移动点
        while((_p->s-p->s)/d2<c&&_p->next!=nullptr){
            minn=min(minn,_p->pri);
            if(_p->pri<p->pri){j=1;break;}
            _p=_p->next;
        }
        if(_p==p){
            cout<<"No Solution";
            return 0;
        }
        _pri=p->pri,_s=p->s;//此_为存入先前出发点数据
        do{
            p=p->next;
        }while(p->pri!=minn&&p->next!=nullptr);
        if(j){
            ans+=((c-fuel)*_pri);
            fuel=(c-(p->s-_s)/d2);
        }
        else{
            ans+=(_pri*((p->s-_s)/d2-fuel));
            fuel-=((p->s-_s)/d2);
            if(fuel<0)fuel=0;
        }
    }
    cout<<fixed<<setprecision(2)<<ans-fuel*_pri;
    return 0;
}//麻了，没改对，下次重构罢emmm。