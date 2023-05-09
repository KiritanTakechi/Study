#include<iostream>
using namespace std;
long long a,b,p;
template <typename T>
T fastpow(T a,T k,T m){
    auto ans=a;
    for(k--;k;k>>=1,a*=a%m,a%=m)
        if(k&1)ans*=a%m,ans%=m;
    return ans%m;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>a>>b>>p;
    cout<<a<<"^"<<b<<" mod "<<p<<"="<<fastpow(a,b,p);
    return 0;
}