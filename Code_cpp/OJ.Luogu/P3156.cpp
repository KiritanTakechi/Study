#include<iostream>
using namespace std;
int n,m;
int main(int argc,char* argv[]){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>m;
    int *a=new int[n];
    for(int i(0);i<n;i++){
        cin>>*(a+i);
    }
    for(int i(0);i<m;i++){
        int tmp;
        cin>>tmp;
        cout<<*(a+tmp-1)<<endl;
    }
    return 0;
}