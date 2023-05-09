#include<iostream>
#include<algorithm>
using namespace std;
int t;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>t;
    while(t--){
        int r,l,ans;
        cin>>r>>l;
        if(l/r>1){
            ans=l&1?l/2:l/2-1;
            cout<<ans<<endl;
        }
        else{
            cout<<l%r<<endl;
        }
    }
    return 0;
}