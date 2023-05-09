#include<iostream>
#define N 1000000
const int max(int a,int b){return a>b?a:b;}
using namespace std;
int a,n,set[N],two,three,top;
int main(int argc,char* argv[]){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>a>>n;
    set[0]=a;
    while(top<n){
        if(set[two]*2+1<set[three]*3+1){set[++top]=set[two++]*2+1;}
        if(set[two]*2+1>set[three]*3+1){set[++top]=set[three++]*3+1;}
        if(set[two]*2+1==set[three]*3+1){set[++top]=set[two]*2+1;two++;three++;}
    }
    cout<<set[top-1];
    return 0;
}