#include<iostream>
using namespace std;
int n,m;
int main(int argc,char* argv[]){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>m;
    int*num=new int[n];
    for(int i=0;i<n;i++)cin>>num[i];
    for(int i=0;i<m;i++){
        cin>>n;
        cout<<num[n-1]<<endl;
    }
    return 0;
}