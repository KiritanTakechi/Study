#include<iostream>
using namespace std;
class node{
    public:
        int data=0;
        node* next=nullptr;
};
int tot;
node *head=new node,*tail=new node;
void createlist(int n){
    tot++;
    node *p=new node;
    *p={n,nullptr};
    head->next==nullptr?head->next=p:tail->next=p;
    tail=p;
}
void insert(int i,int n,bool opt){
    node *p=new node,*tmp=new node,*tmp_=new node;
    p=head->next;
    if(p->data==n){
        switch(opt){
            case 0:
                *tmp_={i,p};
                head->next=tmp_;
                break;
            case 1:
                tmp=p->next;
                *tmp_={i,tmp};
                p->next=tmp_;
                break;
        }
    }
    else{
        while(true){
            if(p->next->data==n){
                switch(opt){
                    case 0:
                        tmp=p->next;
                        *tmp_={i,tmp};
                        p->next=tmp_;
                        break;
                    case 1:
                        p=p->next;
                        tmp=p->next;
                        *tmp_={i,tmp};
                        p->next=tmp_;
                        break;
                }
                break;
            }
            p=p->next;
        }
    }
    tot++;
}
void erase(int x){
    node *p=new node,*tmp=new node;
    p=head->next;
    while(true){
        if(p->next==nullptr)break;
        if(p->next->data==x&&p->next!=nullptr){
            tmp=p->next;
            p->next=tmp->next;
            delete[] tmp;
            tot--;
            break;
        }
        p=p->next;
    }
}
void printlist(){
    node *p=new node;
    p=head->next;
    for(int i(0);i<tot;i++){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int n,m,k,opt,x;
int main(int argc,char* argv[]){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    createlist(1);
    for(int i(2);i<=n;i++){
        cin>>k>>opt;
        insert(i,k,opt);
    }
    cin>>m;
    for(int i(0);i<m;i++){
        cin>>x;
        erase(x);
    }
    printlist();
    return 0;
}