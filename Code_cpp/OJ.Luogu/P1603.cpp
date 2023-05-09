#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<iomanip>
#include<map>
using namespace std;
map<string,int>num;
int t(6),st[10],tot;
string s;
int main(){
    num["one"]=1,num["two"]=4,num["three"]=9,num["four"]=16,num["five"]=25,num["six"]=36,num["seven"]=49,num["eight"]=64,num["nine"]=81,num["ten"]=0,num["eleven"]=21,num["twelve"]=44,num["thirteen"]=69,num["fourteen"]=96,num["fifteen"]=25,num["sixteen"]=56,num["seventeen"]=89,num["eighteen"]=24,num["nineteen"]=61,num["twenty"]=0,num["a"]=1,num["both"]=4,num["another"]=1,num["first"]=1,num["second"]=4,num["third"]=9;
    while(t--){
        cin>>s;
        if(num[s]){
            if(!num[s])continue;
            st[tot++]=num[s];
        }
    }
    sort(st,st+tot);
    cout<<st[0];
    for(int i(1);i<tot;i++)
        cout<<setw(2)<<setfill('0')<<st[i];
    return 0;
}