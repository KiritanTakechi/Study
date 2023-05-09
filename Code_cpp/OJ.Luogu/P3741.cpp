#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int n,ans;
string s;
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin>>n>>s;
    int i(-1);
    while (s.find("VK",i+1)+1){
        ans++;
        i=s.find("VK",i+1);
        s[i]='0',s[i+1]='0';
    }
    if (s.find("VV")+1){cout<<ans+1;return 0;}
	if (s.find("KK")+1){cout<<ans+1;return 0;}
    cout<<ans;
    return 0;
}