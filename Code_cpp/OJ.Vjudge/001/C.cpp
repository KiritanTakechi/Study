#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double f(double x,double y){
    return 8*pow(x,4)+7*pow(x,3)+2*pow(x,2)+3*x+6-y;
}
int t;
int main(int argc,char* argv[]){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>t;
    while(t--){
        double y,l=0,r=100;
        cin>>y;
        if(y<6||y>807020306){
            cout<<"No solution!"<<endl;
            continue;
        }
        while(r-l>0.000001){
            double mid=(l+r)/2;
            if((f(l,y))*(f(mid,y))>0)l=mid;
            else r=mid;
        }
        cout<<fixed<<setprecision(4)<<r<<endl;
    }
    return 0;
}