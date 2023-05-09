#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cmath>
using namespace std;
int n;
long double m,a[1001],b[1001];
inline int check(long double k);
int main(int argc,char* argv[]){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    long double l=0,r=1e15;
    if(!check(1e9+1)){
        cout<<"-1"<<endl;
        return 0;
    }
    while(fabs(r-l)>1e-6){
        long double mid=(l+r)/2;
        if(!check(mid))l=mid;
        else r=mid;
    }
    cout<<fixed<<setprecision(10)<<(l+r)/2<<endl;
    return 0;
}
inline int check(long double k){
    for(int i=0;i<n-1;i++){
        k-=((k+m)/a[i]);
        k-=((k+m)/b[i+1]);
    }
    k-=((k+m)/a[n-1]);
    k-=((k+m)/b[0]);
    if(k>=0)return 1;
    else return 0;
}