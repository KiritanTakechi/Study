#include<iostream>
#include<algorithm>
using namespace std;
int n;
string s1,s2,s3;
bool judge(string s1,string s2,string s3){
    reverse(s1.begin(),s1.end());
    for(int i=0;i<n;i++)
        if(((s2[i]+s3[i])-2*(s1[i]))%26!=0)return 0;
    return 1;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>s1>>s2>>s3;
    if(judge(s1,s2,s3))
        reverse(s1.begin(),s1.end()),cout<<s1<<endl;
    else if(judge(s2,s1,s3))
        reverse(s2.begin(),s2.end()),cout<<s2<<endl;
    else if(judge(s3,s2,s1))
        reverse(s3.begin(),s3.end()),cout<<s3<<endl;
    return 0;
}