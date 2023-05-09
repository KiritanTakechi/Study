#include<iostream>
using namespace std;
int main(int argc,char* argv[]){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int soc;
    cin>>soc;
    if(soc<60)cout<<"Poor";
    else if(soc<70)cout<<"Average";
    else if(soc<90)cout<<"Good";
    else cout<<"Great";
    return 0;
}