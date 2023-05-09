#include<iostream>
#include<stack>
using namespace std;
int n;
stack<int> s;
int main(int argc,char *argv[]){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    int *a=new int[n];
    for(int i(0);i<n;i++)
        cin>>a[i];
    for(int i(0),cur(1);i<n;i++){
        while(cur<=a[i]){
            s.push(cur++);
        }
        if(s.top()==a[i]){
            s.pop();
        }
        else{
            cout<<"NO";
            delete[] a;
            return 0;
        }
    }
    cout<<"YES";
    delete[] a;
    return 0;
}