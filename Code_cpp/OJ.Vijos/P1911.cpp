#include<iostream>
#include<algorithm>
using namespace std;
int n,ans;
int main(int argc,char *argv[]){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    int *a=new int[n];
    for(int i(0);i<n;i++)
        cin>>*(a+i);
    sort(a,a+n);
    for(int i(1);i<n;i++)
        for(int j(i-1);j>0;j--)
            if(count(&a[0],&a[j],a[i]-a[j])){ans++;break;}
    cout<<ans;
    delete[] a;
    return 0;
}