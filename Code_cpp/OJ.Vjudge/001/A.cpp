#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cmath>
using namespace std;
int t,n,m;
int check(double k,double a[]);
int main(int argc,char* argv[]){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>t;
    while(t--){
        double a[10001],maxn=0;
        cin>>n>>m;
        for(int i=0;i<n;i++){cin>>a[i];a[i]=a[i]*a[i]*acos(-1);maxn=max(maxn,a[i]);}
        double l=0,r=maxn;
        while(r-l>1e-5){
            double mid=(l+r)/2;
            if(check(mid,a))l=mid;
            else r=mid;
        }
        cout<<fixed<<setprecision(4)<<((l+r)/2)<<endl;
    }
    return 0;
}
int check(double k,double a[]){
    int sum=0;
    for(int i=0;i<n;i++)sum+=floor(a[i]/k);
    return m<sum;
}