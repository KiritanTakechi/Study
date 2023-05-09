#include<iostream>
#include<string>
#include<cstring>
using namespace std;
string s;
int ans;
int num[26]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    getline(cin,s);
    for(int i(0);i<strlen(&s[0]);i++){
        if(s[i]>='a'&&s[i]<='z')ans+=num[s[i]-'a'];
        if(s[i]==' ')ans++;
    }
    cout<<ans;
    return 0;
}