#include<iostream>
#include<cstring>
#include<vector>
const int min(int a,int b){return a<b?a:b;}
using namespace std;
int n,p,a,tmp,ans,minn(100);
vector<int> soc;
int main(int argc,char* argv[]){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>p;
    soc.push_back(0);
    for(int i(1);i<=n;i++){
        cin>>a;
        soc.push_back(a-tmp);
        tmp=a;
    }
    for(int i(0),x,y,z;i<p;i++){
        cin>>x>>y>>z;
        soc[x]+=z;
        soc[y+1]-=z;
    }
    for(int i(1);i<=n;i++){
        ans+=soc[i];
        minn=min(minn,ans);
    }
    cout<<minn;
    return 0;
}