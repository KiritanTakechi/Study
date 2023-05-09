#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    unsigned long long  a,b,p;
    cin>>a>>b>>p;
    cout<<a*b%p;
    return 0;
}