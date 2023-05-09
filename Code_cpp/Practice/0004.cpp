#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(!(n%i))return 0;
    }
    return 1;
}
int n;
int main(int argc,char* argv[]){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    while(n--){
        int num;
        cin>>num;
        if(isprime(num))cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}