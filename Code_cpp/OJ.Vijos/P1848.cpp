#include<iostream>
#include<algorithm>
using namespace std;
int n,ans;
char x;
string s;
int main(int argc,char *argv[]){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>x;
    for(int i(1);i<=n;i++){
        s=to_string(i);
        ans+=count(s.begin(),s.end(),x);
    }
    cout<<ans;
    return 0;
}