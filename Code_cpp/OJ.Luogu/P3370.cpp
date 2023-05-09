#include<iostream>
#include<cstring>
using namespace std;
class tnode;
tnode *root;
class tnode{
    public:
        bool mark;
        tnode* son[26];
        void operator+=(char s[]){
            int len=strlen(s);
            tnode* p=root;
            for(int i(0);i<len;i++){
                if(p->son[s[i]-65]==nullptr){
                    tnode* _p=new tnode;
                    p->son[s[i]-65]=_p;
                    p=p->son[s[i]-65];
                }
                else p=p->son[s[i]-65];
            }
            p->mark=1;
        }
};
int n,ans;
void countword(tnode *p){
    while(p!=nullptr){
        if(p->mark)ans++;
        for(int i(0);i<26;i++){
            countword(p->son[i]);
        }
    }
}
int main(int argc,char* argv[]){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    while(n--){
        char s;
        cin>>s;
        root+=s;
    }
    tnode*p=new tnode;
    countword(p);
    cout<<ans;
    return 0;
}//先写堆罢，优化一下堆，这个以后debug（摸摸