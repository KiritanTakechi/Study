#include<iostream>
#include<algorithm>
using namespace std;
int ans,n,m,l[100000];
void find(int &r,int &l){
    int tmp=(r+l)/2,sum=0;
    for(int i=0;::l[i]>tmp;i++)
        sum+=::l[i]-tmp;
    if(r!=l&&sum!=m)
        if(sum>m)find(r,tmp);
        else find(tmp,l);
    else ans=tmp;
}
int main(int argc,char* argv[]){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>l[i];
    sort(l,l+n,[](int a,int b)->bool{return a>b;});
    find(l[0],l[n-1]);
    cout<<ans;
    return 0;
}