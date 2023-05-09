#include<iostream>
#include<algorithm>
using namespace std;
int n,m,*a;
int main(int argc,char* argv[]){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>m;
    a=new int[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++){
        int num,ans;
        cin>>num;
        ans=lower_bound(a,a+n,num)-a;
        if(num==a[ans])cout<<ans+1<<" ";
        else cout<<"-1 ";
    }
    return 0;
}