#include<iostream>
using namespace std;
void pre(string in,string post){
    if (in.size()){
        char ch=post[post.size()-1];
        cout<<ch;
        int k=in.find(ch);
        pre(in.substr(0,k),post.substr(0,k));
        pre(in.substr(k+1),post.substr(k,in.size()-k-1));
    }
}
string inord,postord;
int main(int argc,char* argv[]){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>inord>>postord;
    pre(inord,postord);
    return 0;
}