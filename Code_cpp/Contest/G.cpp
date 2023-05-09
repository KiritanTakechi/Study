#include<iostream>
#include<algorithm>
using namespace std;
int t;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>t;
    while(t--){
        long long a,b,k;
        cin>>a>>b>>k;
        cout<<(k-(k/2))*a-(k/2)*b<<endl;
    }
    return 0;
}