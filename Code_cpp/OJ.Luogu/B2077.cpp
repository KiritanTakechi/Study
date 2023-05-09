#include<iostream>
using namespace std;
int n;
void solve(int n){
    if(n>1){
        int tmp=n;
        cout<<n;
        n&1?n=n*3+1:n>>=1;
        if(tmp<n)cout<<"*3+1="<<n<<endl;
        else cout<<"/2="<<n<<endl;
        solve(n);
    }
    else cout<<"End";
}
int main(int argc,char* argv[]){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    solve(n);
    return 0;
}