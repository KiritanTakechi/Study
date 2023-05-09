#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int boy,girl;
string s;
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin>>s;
    for(int i(0);i<strlen(&s[0]);i++){
        if(s[i]=='b'||s[i+1]=='o'||s[i+2]=='y')boy++;
        if(s[i]=='g'||s[i+1]=='i'||s[i+2]=='r'||s[i+3]=='l')girl++;
    }
    cout<<boy<<endl<<girl;
    return 0;
}