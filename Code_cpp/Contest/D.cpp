#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int t;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>t;
    while(t--){
        bool check[50000];
        int n,q,a[50000],p=1;
        memset(check,0,sizeof(check));
        memset(a,0,sizeof(a));
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            check[a[i]]=1;
        }
        cin>>q;
        for(int i=0;i<n;i++){
            if(q-a[i]<0)continue;
            if(check[q-a[i]]&&a[i]!=q-a[i]){
                cout<<"YES!"<<endl;
                p=0;
                break;
            }
        }
        if(p)cout<<"NO!"<<endl;
    }
    return 0;
}