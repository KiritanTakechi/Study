#include<iostream>
using namespace std;
int n[1000],top;
char s[1000];
int main(){
    cin>>s;
    for(int i(0);s[i]!='@';i++){
        switch(s[i]){
        case '+':n[--top]+=n[top+1];break;
        case '-':n[--top]-=n[top+1];break;
        case '*':n[--top]*=n[top+1];break;
        case '/':n[--top]/=n[top+1];break;
        default:
            int tmp(0);
            while(s[i]!='.')tmp=tmp*10+s[i++]-'0';
            n[++top]=tmp;
        }
    }
    cout<<n[top];
    return 0;
}