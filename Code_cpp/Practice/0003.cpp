#include<iostream>
#include<algorithm>
using namespace std;
string s;
int main(int argc,char* argv[]){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>s;
    reverse(s.begin(),s.end()); 
    cout<<s;
    return 0;
}