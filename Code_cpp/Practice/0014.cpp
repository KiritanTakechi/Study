#include<iostream>
#define mod 1000000007
using namespace std;
int t;
unsigned long long a,b;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>t;
    while(t--){
        cin>>a>>b;
        cout<<(a%mod)*(b%mod)%mod<<endl;
    }
    return 0;
}