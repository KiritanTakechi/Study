#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int t,op,a,b;
string s,temp;
int main(){
	ios::sync_with_stdio(0);cin.tie(0),cout.tie(0);
    s.resize(100),temp.resize(100);
    cin>>t>>s;
    while(t--){
        cin>>op;
        switch (op){
            case 1:{
                cin>>temp;
                s+=temp;
                cout<<s<<endl;
                break;
            }
            case 2:{
                cin>>a>>b;
                s=s.substr(a,b);
                cout<<s<<endl;
                break;
            }
            case 3:{
                cin>>a>>temp;
                s.insert(a,temp);
                cout<<s<<endl;
                break;
            }
            case 4:{
                cin>>temp;
                if(s.find(temp)<strlen(&s[0]))cout<<s.find(temp)<<endl;
                else cout<<-1<<endl;
                break;
            }
        }
    }
    return 0;
}