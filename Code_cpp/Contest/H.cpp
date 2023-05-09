#include<iostream>
#include<algorithm>
using namespace std;
int t;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        switch(n&1){
        case 0:
            k=k%(n/2);
            break;
        case 1:
            break;
        }
    }
    return 0;
}