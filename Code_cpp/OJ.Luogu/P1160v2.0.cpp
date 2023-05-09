#include<iostream>
using namespace std;
class node;
node *stu[100000];
class node{
    public:
        int num;
        node *next,*last;
        void operator --(int){
            last->next=next;
            next->last=last;
            stu[num]=0;
            delete[] this;
        }
        void operator +=(int&a){
            node *g=next;
            next=new node;
            g->last=next;
            next->num=a,next->last=this,next->next=g;
            stu[a]=next;
        }
        void operator -=(int&a){
            node *g=last;
            last=new node;
            g->next=last;
            last->num=a,last->last=g,last->next=this;
            stu[a]=last;
        }
};
void print(node*begin,node*end){
    node*g=begin->next;
    while(g!=end)printf("%d ",g->num),g=g->next;
    putchar(10);
}
int main(int argc,char* argv[]){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    node *head=new node,*tail=new node;
    head->next=tail,tail->last=head;
    int n,m,a,b,cnt=1;
    *head+=cnt;
    cin>>n;
    while(--n){
        cnt++;
        cin>>a>>b;
        if(b)*stu[a]+=cnt;
        else*stu[a]-=cnt;
    }
    cin>>n;
    while(n--){
        cin>>a;
        if(stu[a])(*stu[a])--;
    }
    print(head,tail);
    return 0;
}