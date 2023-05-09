#include<iostream>
#include<cmath>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if((n-1)%3){cout<<"NO"<<endl;continue;}
        if((long long)sqrt((n-1)/3)*((long long)sqrt((n-1)/3)+1)==(n-1)/3)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}