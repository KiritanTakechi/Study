#include<iostream>
using namespace std;
int cnt;
void hanoi(int n,char start,char goal,char temp){
    if(n>0){
    hanoi(n-1,start,temp,goal);
    cout<<n<<" "<<start<<" "<<goal<<endl;
    hanoi(n-1,temp,goal,start);
    }
}
int main(int argc,char* argv[]){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    hanoi(n,'A','C','B');
    return 0;
}