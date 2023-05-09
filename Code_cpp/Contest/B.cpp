#include<iostream>
#include<algorithm>
using namespace std;
int t;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>t;
    while(t--){
        unsigned long long  x,y,a,b,minn,maxn,ans;
        cin>>x>>y>>a>>b;
        minn=min(x,y);
        maxn=max(x,y);
        ans=(maxn-minn)*a+minn*b;
        cout<<min(ans,x*a+y*a)<<endl;
    }
    return 0;
}