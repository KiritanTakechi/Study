#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double dxf(double x){
    return 42*pow(x,6)+48*pow(x,5)+21*pow(x,2)+10*x;
}
double f(double x,double y){
    return 6*pow(x,7)+8*pow(x,6)+7*pow(x,3)+5*pow(x,2)-y*x;
}
int t;
int main(int argc,char* argv[]){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>t;
    while(t--){
        double y,l=0,r=100;
        cin>>y;
        while(r-l>0.000001){
            double mid=(l+r)/2;
            if((dxf(l)-y)*(dxf(mid)-y)>0)l=mid;
            else r=mid;
        }
        cout<<fixed<<setprecision(4)<<f(r,y)<<endl;
    }
    return 0;
}