#include<iostream>
#include<algorithm>
using namespace std;
int *a,n,m;
bool check(int k){
    long long sum=0;
    for(int i=0;a[i]>k;i++)sum+=(long long)(a[i]-k);
    return sum>=m;
}
int find(){
    int l=a[n-1],r=a[0];
    while (l+1<r){
        int mid=(l+r)/2;
        if(check(mid))l=mid;
        else r=mid;
    }
    return l;
}
int main(int argc,char* argv[]){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>m;
    a=new int[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n,[](int a,int b)->bool{return a>b;});
    cout<<find();
    return 0;
}