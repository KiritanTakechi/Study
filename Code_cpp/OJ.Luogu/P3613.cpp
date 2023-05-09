#include<iostream>
#include<map>
using namespace std;
map<int,map<int,int>> lat;
int n,q;
int main(int argc,char* argv[]){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>q;
    while(q--){
        int opt,i,j,k;
        cin>>opt>>i>>j;
        switch(opt){
            case 1:
                cin>>k;
                k?lat[i][j]+=k:lat[i][j]=0;
                break;
            case 2:
                cout<<lat[i][j]<<endl;
                break;
        }
    }
    return 0;
}