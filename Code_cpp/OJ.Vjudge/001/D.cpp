#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
long long raw[3],save[3],pie[3],cash,l,r;
char s[1000];
bool check(long long k);
int main(int argc,char* argv[]){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>s;
    int len=strlen(s);
    for(int i=0;i<len;i++)
        switch(s[i]){
        case 'B':
            raw[0]++;
            break;
        case 'S':
            raw[1]++;
            break;
        case 'C':
            raw[2]++;
            break;
        }
    cin>>save[0]>>save[1]>>save[2]>>pie[0]>>pie[1]>>pie[2]>>cash;
    for(int i=0;i<3;i++)pie[i]*=!!raw[i];
    l=min({save[0]/(raw[0]?raw[0]:1),save[1]/(raw[1]?raw[1]:1),save[2]/(raw[2]?raw[2]:1)});
    r=cash+max({(raw[0]?save[0]/raw[0]:0),(raw[1]?save[1]/raw[1]:0),(raw[2]?save[2]/raw[2]:0)});
    while(l<r){
        long long mid=l+r+1>>1;
        if(check(mid))l=mid;
        else r=mid-1;
    }
    cout<<r;
    return 0;
}
bool check(long long k){
    long long sumpie=k*(raw[0]*pie[0]+raw[1]*pie[1]+raw[2]*pie[2])-((k*raw[0]>save[0]?save[0]:k*raw[0])*pie[0]+(k*raw[1]>save[1]?save[1]:k*raw[1])*pie[1]+(k*raw[2]>save[2]?save[2]:k*raw[2])*pie[2]);
    return cash>=sumpie;
}