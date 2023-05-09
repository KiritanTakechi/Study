#include<cstdio>
class node{
    public:
        int data;
        node *next;
};
int n,m;
node *head,*tail;
void createlink(int n){
    node *p=new node;
    *p={n,0};
    head==0?head=p:tail->next=p;
    tail=p;
}
int main(){
    scanf("%d%d",&n,&m);
    for(int i(1);i<=n;i++)
        createlink(i);
    tail->next=head;
    node *p=new node,*tp=new node;
    p=tail;
    for(int i(0);i<n;i++){
        for(int j(1);j<m;j++){
            p=p->next;
        }
        tp=p->next;
        printf("%d ",tp->data);
        p->next=tp->next;
        delete tp;
    }
    return 0;
}