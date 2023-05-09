#include<iostream>
#include<algorithm>
using namespace std;
int t,l[3],maxp;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>t;
    while(t--){
        cin>>l[0]>>l[1]>>l[2];
        for(int i(0);i<3;i++)
            if(l[i]>l[(i+1)%3]){maxp=i;}
        if(l[maxp]<l[(maxp+2)%3]+l[(maxp+4)%3])cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}