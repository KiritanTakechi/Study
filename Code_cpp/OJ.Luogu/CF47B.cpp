#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
string a,b,c;
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>a>>b>>c;
	if(a[1]=='<')swap(a[0],a[2]);
	if(b[1]=='<')swap(b[0],b[2]);
	if(c[1]=='<')swap(c[0],c[2]);
	if(a[0]==b[0])cout<<c[2]<<c[0]<<a[0];
	else if(b[0]==c[0])cout<<a[2]<<a[0]<<b[0];
	else if(a[0]==c[0])cout<<b[2]<<b[0]<<c[0];
	else cout<<"Impossible";
 	return 0;
}