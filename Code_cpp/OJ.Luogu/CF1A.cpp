#include<iostream>
#include<cmath>
using namespace std;
int n,m,a;
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m>>a;
	cout<<(long long)(ceil(n/(double)a)*ceil(m/(double)a));
	return 0;
}