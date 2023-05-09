#include<iostream>
#include<algorithm>
using namespace std;
int n,m,*a,l,r;
bool check(int k){
    int sum=0,tot=0;
    for(int i=0;i<n;i++){
        if(sum+a[i]<=k)sum+=a[i];
        else sum=a[i],tot++;
    }
    return tot>=m;
}
int main(int argc,char* argv[]){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>m;
    a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        l=max(l,a[i]);
        r+=a[i];
    }
    while(l<r){
        int mid=(l+r)>>1;
        if(check(mid))l=mid+1;
        else r=mid;
    }
    cout<<l;
    return 0;
}