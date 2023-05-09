#include<iostream>
#include<cstring>
using namespace std;
class treenode{
    public:
        char ele;
        treenode *right=nullptr,*left=nullptr;
};
treenode* tree(char* in,char* post,int len){
    if(!len)return nullptr;
    treenode* node=new treenode;
    node->ele=*(post+len-1);
    cout<<node->ele;
    int root=0;
    for(;root<len;root++)
        if(*(in+root)==*(post+len-1))break;
    node->left=tree(in,post,root);
    node->right=tree(in+root+1,post+root,len-root-1);
    return node;
}
int main(int argc,char* argv[]){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    char *in=new char[8],*post=new char[8];
    cin>>in>>post;
    tree(in,post,strlen(in));
    return 0;
}