#include<iostream>
#include<algorithm>
using namespace std;
unsigned long long t,n;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>t;
    while(t--){
        unsigned long long  minn(-1);
        cin>>n;
        for(unsigned long long  i=0,x,y;i<n;i++){
            cin>>x>>y;
            minn=min(minn,x*x+y*y);
        }
        cout<<minn<<endl;
    }
    return 0;
}