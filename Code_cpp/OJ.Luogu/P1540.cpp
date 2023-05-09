#include<vector>
#include<iostream> 
#include<algorithm>
using namespace std;
int m,n,t,ans;
int main(int argc,char* argv[]){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>m>>n;
	vector<int> v;
	while(cin>>t){
		if(!count(v.begin(),v.end(),t))v.push_back(t),ans++;
		if(v.size()>m)v.erase(v.begin());
	}
	cout<<ans;
}