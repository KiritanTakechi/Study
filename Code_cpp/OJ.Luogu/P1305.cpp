#include<iostream>
using namespace std;
int n;
class treenode{
    public:
        char left;
        char right;
}node[100];
void preorder(char x){
    if(x!='*'){
        cout<<x;
        preorder(node[x].left);
        preorder(node[x].right);
    }
}
int main(int argc,char* argv[]){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    char a,b,c;
    cin>>a>>b>>c;
    char root=a;
    node[a].left=b;
    node[a].right=c;
    for(int i=1;i<n;i++){
        cin>>a>>b>>c;
        node[a].left=b;
        node[a].right=c;
    }
    preorder(root);
    return 0;
}
