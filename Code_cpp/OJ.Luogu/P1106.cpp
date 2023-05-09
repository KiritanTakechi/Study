#include<cstdio>
#include<cstring>
class node{
    public:
        int data;
        node *next;
};
node *head=NULL,*tail;
int k,len;
char s[260];
void createlink(int n){
    node *p=new node;
    *p={n,NULL};
    head==NULL?head=p:tail->next=p;
    tail=p;
}
void deletelink(int n){
    node *p=new node;
    p=head;
    if(n==0)
        head=head->next;
    else
        for(int i(1);p!=NULL;i++){
            if(n==i&&i<len-1){
                p->next=p->next->next;
                break;
            }
            if(n==i&&n==len-1){
                p->next=NULL;
                break;
            }
            p=p->next;
        }
}
void printlink(){
    node *p=new node;
    p=head;
    bool j=0;
    while(p!=NULL){
        if(!j&&p->data)j=1;
        if(!j&&p->next==NULL)printf("%d",p->data);
        if(j)printf("%d",p->data);
        p=p->next;
    }
}
int main(){
    scanf("%s%d",s,&k);
    len=strlen(s);
    if(len==k){
        printf("0");
        return 0;
    }
    for(int i(0);i<len;i++)
        createlink(int(s[i]-'0'));
    while(k){
        bool j=0;
        node *p=new node;
        p=head;
        for(int i(0);i<len-1;i++){
            if(p->data>p->next->data){
                deletelink(i);
                len--;
                k--;
                j=1;
                break;
            }
            p=p->next;
        }
        if(!j){
            p=head;
            for(int i(0);i<len-k-1;i++)
                p=p->next;
            p->next=NULL;
            k=0;
        }
    }
    printlink();
    delete head,tail;
    return 0;
}