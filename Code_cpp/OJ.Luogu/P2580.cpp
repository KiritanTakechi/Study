#include<iostream>
#include<cstring>
using namespace std;
struct trie{
    int nex[600000][26],exist[600000],cnt;
    void insert(char *s,int l){
        int p=0;
        for(int i=0;i<l;i++){
        int c=s[i]-'a';
        if(!nex[p][c])nex[p][c]=++cnt;
        p=nex[p][c];
        }
        exist[p]=1;
    }
    int find(char *s,int l){
        int p=0;
        for(int i=0;i<l;i++){
        int c=s[i]-'a';
        if(!nex[p][c])return 0;
        p=nex[p][c];
        }
        exist[p]+=exist[p]%4;
    return exist[p];
    }
}tree;
int n,m;
int main(int argc,char* argv[]){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    while(n--){
        char s[100];
        cin>>s;
        tree.insert(s,strlen(s));
    }
    cin>>m;
    while(m--){
        char s[100];
        cin>>s;
        int p=tree.find(s,strlen(s));
        switch(p){
        case 0:
            cout<<"WRONG"<<endl;
            break;
        case 2:
            cout<<"OK"<<endl;
            break;
        default:
            cout<<"REPEAT"<<endl;
            break;
        }
    }
    return 0;
}